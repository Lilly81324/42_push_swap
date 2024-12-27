/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:32:05 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:32:05 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// swaps the values in list at index1 and index, writing s<which>\n to instru
void	ft_swap(int *list, t_instru *instru, char which)
{
	char	*result;
	int		temp;

	result = (char *)calloc(3, sizeof(char));
	result[0] = 's';
	result[1] = which;
	result[2] = '\0';
	temp = list[0];
	list[0] = list[1];
	list[1] = temp;
	ft_write_inst(result, instru);
	free(result);
}
