/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:33:29 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:33:29 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// pushes first element of source list to top of target list and notes instr
// increases the length of the target list, rotates target list downward
// set target list first element to first element of source list
// rotate source list upwards, decreasing size by 1
void	ft_pushb(t_lst *lst, t_instru *instru)
{
	int		i;
	char	*result;

	lst->lb = lst->lb + 1;
	i = lst->lb;
	while (i > 1)
	{
		lst->b[i - 1] = lst->b[i - 2];
		i--;
	}
	lst->b[0] = lst->a[0];
	i = 0;
	while (i < (lst->la - 1))
	{
		lst->a[i] = lst->a[i + 1];
		i++;
	}
	lst->la = (lst->la - 1);
	result = (char *)calloc(3, sizeof(char));
	result[0] = 'p';
	result[1] = 'b';
	result[2] = '\0';
	ft_write_inst(result, instru);
	free(result);
}
