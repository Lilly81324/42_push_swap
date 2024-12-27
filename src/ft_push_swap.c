/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:30:40 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 17:30:40 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// gets "1, 2, 4, 3"
int	main(int argc, char *argv[])
{
	t_lst	lst;

	if (argc == 1)
		return (0);
	lst.la = atoi(argv[1]);
	lst.lb = 0;
	lst.b = (int *)malloc(lst.la * sizeof(int));
	lst.a = ft_make_list(lst.la);
	lst.a = ft_shuffle(lst.a, lst.la);
	ft_print_array(lst.a, lst.la);
	ft_print_array(lst.b, lst.lb);
	ft_launcher(&lst);
	free(lst.a);
	free(lst.b);
	return (0);
}
