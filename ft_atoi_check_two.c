/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check_two.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:13:17 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/31 15:13:47 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// checks for over and underflow by using a long long int
// checks if number is 0 digits long or there are any chars after it
// returns 0 in those cases or 1 if normal
int	ft_atoi_check_two(const char *nptr, int i, int fac)
{
	int				res;
	long long int	temp;
	int				digits;

	res = 0;
	temp = 0;
	digits = 0;
	while ((nptr[i] >= '0' && nptr[i] <= '9') && digits < 12)
	{
		temp = (temp * 10) + (nptr[i] - '0');
		digits++;
		i++;
	}
	if (nptr[i] != '\0' || digits == 0)
		return (0);
	if (temp > INT_MAX && fac == 1)
		return (0);
	if ((temp * -1) < INT_MIN && fac == -1)
		return (0);
	return (1);
}
