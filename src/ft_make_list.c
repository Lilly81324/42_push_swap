/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:32:38 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:32:38 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// Create a list of len elements in ascending order from 1 to len
int	*ft_make_list(int len)
{
	int	i;
	int	*list;

	i = 0;
	list = (int *)malloc(len * sizeof(int));
	while (i < len)
	{
		list[i] = i + 1;
		i++;
	}
	return (list);
}
