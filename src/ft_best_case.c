/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:44:14 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:44:14 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// returns which case is most ideal to move in
// 0 means rr		| 3 means rrr
// 1 means ra rrb 	| 2 means rra rb
int	ft_best_case(int *cross)
{
	int	cases;
	int	moves;

	cases = 0;
	moves = ft_rr_moves(cross[0], cross[1]);
	if ((cross[0] + cross[3]) < moves)
	{
		cases = 1;
		moves = (cross[0] + cross[3]);
	}
	if ((cross[1] + cross[2]) < moves)
	{
		cases = 2;
		moves = (cross[1] + cross[2]);
	}
	if (ft_rr_moves(cross[2], cross[3]) < moves)
	{
		cases = 3;
		moves = ft_rr_moves(cross[2], cross[3]);
	}
	return (cases);
}
