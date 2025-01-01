/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:08:22 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:08:22 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// move both lists downwards simultaniously and then the rest
void	ft_case_three(t_lst *lst, t_instru *instru, int *cross)
{
	while (ft_min(cross[2], cross[3]) > 0)
	{
		ft_rev_rotate(lst->a, lst->la, instru, 'r');
		ft_rev_rotate(lst->b, lst->lb, instru, '0');
		cross[2] = cross[2] - 1;
		cross[3] = cross[3] - 1;
	}
	while (ft_max(cross[2], cross[3]) > 0)
	{
		if (cross[2] > 0)
		{
			ft_rev_rotate(lst->a, lst->la, instru, 'a');
			cross[2] = cross[2] - 1;
		}
		else if (cross[3] > 0)
		{
			ft_rev_rotate(lst->b, lst->lb, instru, 'b');
			cross[3] = cross[3] - 1;
		}
	}
}
