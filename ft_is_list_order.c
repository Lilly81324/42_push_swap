/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_list_order.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:31:01 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:31:01 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// Returns 1 if all elements of list are ascending
int	ft_is_list_order(int *list, int len)
{
	int	i;

	i = 0;
	while (i < len - 1 && list[i] <= list[i + 1])
		i++;
	if (i == len - 1)
		return (1);
	return (0);
}
