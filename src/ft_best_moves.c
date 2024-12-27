/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:51:50 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:51:50 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// returns which way of moving thorugh arrays takes least moves
// returns that number of moves
int	ft_best_moves(int *cross)
{
	int	moves;

	moves = ft_rr_moves(cross[0], cross[1]);
	if ((cross[0] + cross[3]) < moves)
		moves = (cross[0] + cross[3]);
	if ((cross[1] + cross[2]) < moves)
		moves = (cross[1] + cross[2]);
	if (ft_rr_moves(cross[2], cross[3]) < moves)
		moves = ft_rr_moves(cross[2], cross[3]);
	free(cross);
	return (moves);
}
