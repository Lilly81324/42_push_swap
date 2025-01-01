/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:06:53 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:06:53 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// move list a downwards and list b upwards
void	ft_case_two(t_lst *lst, t_instru *instru, int *cross)
{
	while (cross[2] > 0)
	{
		ft_rev_rotate(lst->a, lst->la, instru, 'a');
		cross[2] = cross[2] - 1;
	}
	while (cross[1] > 0)
	{
		ft_rotate(lst->b, lst->lb, instru, 'b');
		cross[1] = cross[1] - 1;
	}
}
