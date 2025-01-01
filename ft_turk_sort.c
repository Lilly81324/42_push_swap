/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_turk_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:46:39 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:46:39 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// push two elements to b
// rotate through a to get the most ideal element to push to b
// that way b gets sorted descendingly
// then rotate b so biggest element at top
// then push b to a until b empty
void	ft_turk_sort(t_lst *lst, t_instru *instru)
{
	int	index;

	ft_pushb(lst, instru);
	ft_pushb(lst, instru);
	while (lst->la > 0)
	{
		ft_handle_rotation(lst, instru);
		ft_pushb(lst, instru);
	}
	index = ft_index_big(lst->b, lst->lb);
	while (ft_index_big(lst->b, lst->lb) != 0)
	{
		if (index < (lst->lb / 2))
			ft_rotate(lst->b, lst->lb, instru, 'b');
		else
			ft_rev_rotate(lst->b, lst->lb, instru, 'b');
	}
	while (lst->lb > 0)
		ft_pusha(lst, instru);
}
