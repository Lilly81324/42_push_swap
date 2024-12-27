/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shuffle.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:33:04 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:33:04 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// Randomize the elements of the array 
// by switching all elements with a random one
int	*ft_shuffle(int *list, int length)
{
	int	i;
	int	temp;
	int	swap_index;

	i = 0;
	srand(time(NULL));
	while (i < length)
	{
		swap_index = rand() % length;
		temp = list[i];
		list[i] = list[swap_index];
		list[swap_index] = temp;
		i++;
	}
	return (list);
}
