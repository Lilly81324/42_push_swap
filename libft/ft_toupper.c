/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:35:41 by sikunne           #+#    #+#             */
/*   Updated: 2024/11/11 13:16:06 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int x)
{
	int	i;

	i = 0;
	if (x <= 122 && x >= 97)
		return (x - 32);
	return (x);
}
