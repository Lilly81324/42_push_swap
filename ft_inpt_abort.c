/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inpt_abort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:51:20 by sikunne           #+#    #+#             */
/*   Updated: 2025/01/02 18:18:51 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// frees the given arguments and returns 0;
void	ft_inpt_abort(char **array)
{
	int	i;

	i = 0;
	if (array == NULL)
		return ;
	while (array[i] != NULL)
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
	array = NULL;
}
