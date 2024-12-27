/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_inst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:28:51 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 16:28:51 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// write down the given 2 or 3 letter input with a \n
// character into the instru object and update according
void	ft_write_inst(char *input, t_instru *instru)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		instru->instructions[instru->head] = input[i];
		(*instru).head++;
		i++;
	}
	(*instru).instructions[(*instru).head] = '\n';
	(*instru).inst_count++;
	(*instru).head++;
}
