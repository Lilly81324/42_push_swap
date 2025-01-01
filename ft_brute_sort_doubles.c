/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brute_sort_doubles.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:27:55 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/31 15:47:03 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// brute forces all the 4 combinations of an unsorted 3 lgth array,
// where at least two elements are the same
void	ft_brute_sort_doubles(t_lst *lst, t_instru *instru)
{
	if (lst->a[0] == lst->a[1])
		ft_rev_rotate(lst->a, lst->la, instru, 'a');
	else if (lst->a[1] == lst->a[2])
		ft_rotate(lst->a, lst->la, instru, 'a');
	else if (lst->a[0] == lst->a[2] && lst->a[0] > lst->a[1])
		ft_rotate(lst->a, lst->la, instru, 'a');
	else if (lst->a[0] == lst->a[2] && lst->a[0] < lst->a[1])
		ft_rev_rotate(lst->a, lst->la, instru, 'a');
}
