/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_rotation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:48:19 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:48:19 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// rotate through list a and find the index which has the least moves
// then get the cross for that index
// find out which case was best for this index
// then execute rotations according to that case
void	ft_handle_rotation(t_lst *lst, t_instru *instru)
{
	int	*cross;
	int	cases;

	cross = ft_cross_moves(lst, ft_best_index(lst));
	cases = ft_best_case(cross);
	if (cases == 0)
		ft_case_zero(lst, instru, cross);
	else if (cases == 1)
		ft_case_one(lst, instru, cross);
	else if (cases == 2)
		ft_case_two(lst, instru, cross);
	else if (cases == 3)
		ft_case_three(lst, instru, cross);
	free(cross);
}
