/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brute_sort_insort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 16:47:49 by sikunne           #+#    #+#             */
/*   Updated: 2025/01/01 18:07:46 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// pushes elements from b into the right position in a
// rotates through a so topmost element is right pos
void	ft_brute_sort_insort(t_lst *lst, t_instru *instru)
{
	int	index;
	int	target;

	while (lst->lb > 0)
	{
		if (lst->b[0] > lst->a[ft_index_big(lst->a, lst->la)])
			index = ft_index_smal(lst->a, lst->la);
		else
			index = ft_next_big(lst->a, lst->la, lst->b[0]);
		target = lst->a[index];
		while (lst->a[0] != target)
		{
			if (index <= (lst->la / 2))
				ft_rotate(lst->a, lst->la, instru, 'a');
			else
				ft_rev_rotate(lst->a, lst->la, instru, 'a');
		}
		ft_pusha(lst, instru);
	}
}
