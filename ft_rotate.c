/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:32:54 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:32:54 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// move all elements in list up, note the instruction
void	ft_rotate(int *list, int len, t_instru *instru, char which)
{
	int		i;
	char	*result;
	int		first;

	i = 0;
	result = (char *)calloc(3, sizeof(char));
	result[0] = 'r';
	result[1] = which;
	result[2] = '\0';
	first = list[0];
	while (i < len - 1)
	{
		list[i] = list[i + 1];
		i++;
	}
	list[len - 1] = first;
	if (which != '0')
		ft_write_inst(result, instru);
	free(result);
}
