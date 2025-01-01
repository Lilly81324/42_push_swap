/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brute_sort_ext.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:44:53 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:44:53 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// brute force sorting algorithm
// pushes numbers into b until three are left
// brute sorts those numbers, then uses
// insertion sort to put the numbers from b to
// the correct position in a
// then rotates so smallest element first
void	ft_brute_sort_ext(t_lst *lst, t_instru *instru)
{
	int	i;

	i = lst->la - 3;
	while (i > 0)
	{
		ft_pushb(lst, instru);
		i--;
	}
	ft_brute_sort_base(lst, instru);
	ft_brute_sort_insort(lst, instru);
	while (lst->a[0] != lst->a[ft_index_smal(lst->a, lst->la)])
	{
		if (ft_index_smal(lst->a, lst->la) <= (lst->la / 2))
			ft_rotate(lst->a, lst->la, instru, 'a');
		else
			ft_rev_rotate(lst->a, lst->la, instru, 'a');
	}
}
