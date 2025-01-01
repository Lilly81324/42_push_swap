/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_zero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:03:16 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:03:16 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// move both lists upwards and then the rest upwards
void	ft_case_zero(t_lst *lst, t_instru *instru, int *cross)
{
	while (ft_min(cross[0], cross[1]) > 0)
	{
		ft_rotate(lst->a, lst->la, instru, 'r');
		ft_rotate(lst->b, lst->lb, instru, '0');
		cross[0] = cross[0] - 1;
		cross[1] = cross[1] - 1;
	}
	while (ft_max(cross[0], cross[1]) > 0)
	{
		if (cross[0] > 0)
		{
			ft_rotate(lst->a, lst->la, instru, 'a');
			cross[0] = cross[0] - 1;
		}
		else if (cross[1] > 0)
		{
			ft_rotate(lst->b, lst->lb, instru, 'b');
			cross[1] = cross[1] - 1;
		}
	}
}
