/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cross_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:58:41 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:58:41 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// returns an array of how many moves to move required element to top of list
// needs lists and index of current element in a
// lista upwards , listb upwards, lista downwards, listb downwards
int	*ft_cross_moves(t_lst *lst, int i)
{
	int	*cross;

	cross = (int *)malloc(4 * sizeof(int));
	cross[0] = i;
	if (lst->a[i] <= lst->b[ft_index_smal(lst->b, lst->lb)])
		cross[1] = ft_index_big(lst->b, lst->lb);
	else
		cross[1] = ft_next_smal(lst->b, lst->lb, lst->a[i]);
	cross[2] = lst->la - i;
	if (lst->a[i] <= lst->b[ft_index_smal(lst->b, lst->lb)])
		cross[3] = lst->lb - ft_index_big(lst->b, lst->lb);
	else
		cross[3] = lst->lb - ft_next_smal(lst->b, lst->lb, lst->a[i]);
	return (cross);
}
