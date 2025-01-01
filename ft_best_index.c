/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:39:07 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:39:07 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// check for every number in list aa
// how many moves it would take to move it before the next biggest number in b
// returns the index of the element with the least moves (or earliest)
int	ft_best_index(t_lst *lst)
{
	int	i;
	int	moves;
	int	least_moves;
	int	b_index;

	i = 0;
	least_moves = 999999;
	while (i < lst->la)
	{
		moves = ft_best_moves(ft_cross_moves(lst, i));
		if (moves < least_moves)
		{
			least_moves = moves;
			b_index = i;
		}
		i++;
	}
	return (b_index);
}
