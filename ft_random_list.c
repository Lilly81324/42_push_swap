/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 17:04:51 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/31 17:23:49 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

t_lst	*ft_random_list(int len)
{
	t_lst	*lst;

	lst = (t_lst *)ft_calloc(1, sizeof(t_lst));
	lst->a = ft_shuffle(ft_make_list(len), len);
	lst->la = len;
	lst->b = ft_calloc(len, sizeof(int));
	lst->lb = 0;
	return (lst);
}
