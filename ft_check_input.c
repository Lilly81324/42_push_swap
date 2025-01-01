/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 16:48:12 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/31 15:14:31 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// returns 1 if input is valid
// checks if all numbers are valid for atoi
// then checks for duplicate numbers with atoi
int	ft_check_input(char **input)
{
	int	i;
	int	j;

	i = 0;
	while (input[i] != NULL)
	{
		j = i + 1;
		if (ft_atoi_check_one(input[i]) == 0)
			return (0);
		while (input[j] != NULL)
		{
			if (ft_atoi(input[i]) == ft_atoi(input[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
