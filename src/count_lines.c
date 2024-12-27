/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:44:31 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 20:44:31 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

int	count_lines(t_instru instru)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (instru.instructions[i] != '\0')
	{
		if (instru.instructions[i] == '\n')
			count++;
		i++;
	}
	return (count);
}
