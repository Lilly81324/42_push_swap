/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:05:51 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:05:51 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// move list a upwards and list b downwards
void	ft_case_one(t_lst *lst, t_instru *instru, int *cross)
{
	while (cross[0] > 0)
	{
		ft_rotate(lst->a, lst->la, instru, 'a');
		cross[0] = cross[0] - 1;
	}
	while (cross[3] > 0)
	{
		ft_rev_rotate(lst->b, lst->lb, instru, 'b');
		cross[3] = cross[3] - 1;
	}
}
