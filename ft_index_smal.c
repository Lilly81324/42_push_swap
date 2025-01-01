/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_smallest.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:40:35 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:40:35 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

//returns index of the smallest (or first) element in array
int	ft_index_smal(int *list, int len)
{
	int	i;
	int	smallest;

	i = 0;
	smallest = 0;
	while (i < len)
	{
		if (list[i] < list[smallest])
			smallest = i;
		i++;
	}
	return (smallest);
}
