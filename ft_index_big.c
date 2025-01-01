/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_biggest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:40:55 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:40:55 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

//returns the index of the biggest element in the list
int	ft_index_big(int *list, int len)
{
	int	i;
	int	biggest;

	i = 0;
	biggest = 0;
	while (i < len)
	{
		if (list[i] > list[biggest])
			biggest = i;
		i++;
	}
	return (biggest);
}
