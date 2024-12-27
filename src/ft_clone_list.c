/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clone_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:33:23 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:33:23 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// Create a clone of the given list and return it
int	*ft_clone_list(int *original, int size)
{
	int	i;
	int	*clone;

	i = 0;
	clone = (int *)malloc(size * sizeof(int));
	while (i < size)
	{
		clone[i] = original[i];
		i++;
	}
	return (clone);
}
