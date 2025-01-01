/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:32:50 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:32:50 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// Displays array of length on stdout
void	ft_print_array(int	*array, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		ft_printf("%d, ", array[i]);
		i++;
	}
	ft_printf("\n");
}
