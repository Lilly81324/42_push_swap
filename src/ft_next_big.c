/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:29:31 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:29:31 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// gives back the index of the smallest number 
// in list that is still bigger than min
int	ft_next_big(int *list, int len, int min)
{
	int	i;
	int	current;
	int	smallest;

	i = 0;
	current = 0;
	smallest = 2147483647;
	while (i < len)
	{
		if (list[i] < smallest && list[i] >= min)
		{
			smallest = list[i];
			current = i;
		}
		i++;
	}
	return (current);
}
