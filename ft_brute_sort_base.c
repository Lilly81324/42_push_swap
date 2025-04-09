/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brute_sort_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:45:13 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:45:13 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// brute forces all the 5 combinations of an unsorted 3 lgth array
// as well as the 4 cases where two elements are equal
void	ft_brute_sort_base(t_lst *lst, t_instru *instru)
{
	if (lst->a[0] == lst->a[1] || \
lst->a[1] == lst->a[2] || \
lst->a[2] == lst->a[0])
		ft_brute_sort_doubles(lst, instru);
	else if (lst->a[0] < lst->a[1] && lst->a[1] > lst->a[2] && \
lst->a[0] < lst->a[2])
	{
		ft_rev_rotate(lst->a, lst->la, instru, 'a');
		ft_swap(lst->a, instru, 'a');
	}
	else if (lst->a[0] > lst->a[1] && lst->a[1] < lst->a[2] && \
lst->a[0] < lst->a[2])
		ft_swap(lst->a, instru, 'a');
	else if (lst->a[0] < lst->a[1] && lst->a[1] > lst->a[2] && \
lst->a[0] > lst->a[2])
		ft_rev_rotate(lst->a, lst->la, instru, 'a');
	else if (lst->a[0] > lst->a[1] && lst->a[1] < lst->a[2] && \
lst->a[0] > lst->a[2])
		ft_rotate(lst->a, lst->la, instru, 'a');
	else if (lst->a[0] > lst->a[1] && lst->a[1] > lst->a[2] && \
lst->a[0] > lst->a[2])
	{
		ft_rotate(lst->a, lst->la, instru, 'a');
		ft_swap(lst->a, instru, 'a');
	}
}
