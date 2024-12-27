/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:04:57 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:04:57 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// returns whichever number is bigger
int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
