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

void	ft_brute_sort_ext(t_lst *lst, t_instru *instru)
{
	int	index;
	int	target;
	int	i;

	i = lst->la - 3;
	while (i > 0)
	{
		ft_pushb(lst, instru);
		i--;
	}
	ft_brute_sort_base(lst, instru);
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
	while (lst->a[0] != lst->a[ft_index_smal(lst->a, lst->la)])
	{
		if (ft_index_smal(lst->a, lst->la) <= (lst->la / 2))
			ft_rotate(lst->a, lst->la, instru, 'a');
		else
			ft_rev_rotate(lst->a, lst->la, instru, 'a');
	}
}
// seperate intp 6 cases
// for every case lead it to 00-11
// middle element changes index