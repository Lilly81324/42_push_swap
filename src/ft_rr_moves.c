/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:37:30 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:37:30 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// used to count how many moves it would take to move two lists
// in paralell, using rr or rrr + the rest of moves
// min is the amount of rr and (max - min) the amount only one list moves
int	ft_rr_moves(int a, int b)
{
	int	min;
	int	max;

	if (a < b)
		min = a;
	else
		min = b;
	if (a < b)
		max = b;
	else
		max = a;
	return (min + (max - min));
}
