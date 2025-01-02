/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prepare_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:38:30 by sikunne           #+#    #+#             */
/*   Updated: 2025/01/02 16:44:12 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// gets a list of lists of chars and creates a
// int array with all the contents
// gets length
t_lst	*ft_prepare_lst(char **raw)
{
	int		i;
	t_lst	*lst;

	i = 0;
	lst = (t_lst *)ft_calloc(1, sizeof(t_lst));
	while (raw[i] != NULL)
		i++;
	lst->la = i;
	lst->a = (int *)ft_calloc(i, sizeof(int));
	lst->lb = 0;
	lst->b = (int *)ft_calloc(i, sizeof(int));
	i = 0;
	while (raw[i] != NULL)
	{
		lst->a[i] = ft_atoi(raw[i]);
		i++;
	}
	return (lst);
}
