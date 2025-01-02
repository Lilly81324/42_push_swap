/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check_one.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:13:17 by sikunne           #+#    #+#             */
/*   Updated: 2025/01/02 16:59:48 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// converts string into number, starting at first +, - or number
// handles NULL string by returning 0
int	ft_atoi_check_one(char *nptr)
{
	int	i;
	int	fac;

	i = 0;
	fac = 1;
	if (nptr == NULL)
		return (0);
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t' \
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			fac = fac * -1;
		i++;
	}
	while (nptr[i] == '0' && nptr[i + 1] == '0')
		i++;
	return (ft_atoi_check_two(nptr, i, fac));
}
