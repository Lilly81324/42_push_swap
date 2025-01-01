/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pusha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:33:34 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:33:34 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// pushes first element of source list to top of target list and notes instr
// increases the length of the target list, rotates target list downward
// set target list first element to first element of source list
// rotate source list upwards, decreasing size by 1
void	ft_pusha(t_lst *lst, t_instru *instru)
{
	int		i;
	char	*result;

	lst->la = lst->la + 1;
	i = lst->la;
	while (i > 1)
	{
		lst->a[i - 1] = lst->a[i - 2];
		i--;
	}
	lst->a[0] = lst->b[0];
	i = 0;
	while (i < (lst->lb - 1))
	{
		lst->b[i] = lst->b[i + 1];
		i++;
	}
	lst->lb = (lst->lb - 1);
	result = (char *)calloc(3, sizeof(char));
	result[0] = 'p';
	result[1] = 'a';
	result[2] = '\0';
	ft_write_inst(result, instru);
	free(result);
}
