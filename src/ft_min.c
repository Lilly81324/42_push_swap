/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:04:51 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:04:51 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// returns whichever number is smaller
int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
