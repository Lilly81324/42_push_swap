/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:33:07 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:33:07 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// move all elements in list down, note the instruction
void	ft_rev_rotate(int *list, int len, t_instru *instru, char which)
{
	char	*result;
	int		last;

	result = (char *)calloc(4, sizeof(char));
	result[0] = 'r';
	result[1] = 'r';
	result[2] = which;
	result[3] = '\0';
	last = list[len - 1];
	while (len > 1)
	{
		list[len - 1] = list[len - 2];
		len--;
	}
	list[0] = last;
	if (which != '0')
		ft_write_inst(result, instru);
	free(result);
}
