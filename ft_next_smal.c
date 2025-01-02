/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_smal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:42:05 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:42:05 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// gives back the index of the biggest number 
// in list that is still smaller than max
int	ft_next_smal(int *list, int len, int max)
{
	int	i;
	int	current;
	int	biggest;

	i = 0;
	current = 0;
	biggest = -2147483648;
	while (i < len)
	{
		if (list[i] >= biggest && list[i] <= max)
		{
			biggest = list[i];
			current = i;
		}
		i++;
	}
	return (current);
}
