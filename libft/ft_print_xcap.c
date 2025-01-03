/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xcap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:22:45 by sikunne           #+#    #+#             */
/*   Updated: 2024/11/22 12:20:20 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

// writes out an unsigned int in hexadecimal and returns bytes written
// UPPERCASE!
size_t	ft_print_xcap(unsigned int num)
{
	size_t	count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (num < 0)
	{
		num = num * -1;
		write(1, "-", 1);
		count++;
	}
	if (num >= 16)
		count += ft_print_xcap(num / 16);
	write(1, &base[num % 16], 1);
	count++;
	return (count);
}