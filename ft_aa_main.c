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

// for debugging replace "ft_prepare_lst(raw)"
// with "ft_random_list(x)", x being the number of elements
// also you can use ft_print_array to display arrays
int	main(int argc, char *argv[])
{
	t_lst	*lst;
	char	**raw;

	if (argc == 1)
		return (0);
	raw = ft_split(argv[1], ' ');
	if (ft_check_input(raw) == 0)
	{
		ft_inpt_abort(raw);
		ft_printf("Error\n");
		return (0);
	}
	lst = ft_prepare_lst(raw);
	ft_launcher(lst);
	free(lst->a);
	free(lst->b);
	free(lst);
	return (0);
}

// gets "1, 2, 4, 3"
// int	main(int argc, char *argv[])
// {
// 	t_lst	lst;

// 	if (argc == 1)
// 		return (0);
// 	lst.la = ft_atoi(argv[1]);
// 	lst.lb = 0;
// 	lst.b = (int *)ft_calloc(lst.la, sizeof(int));
// 	lst.a = ft_make_list(lst.la);
// 	lst.a = ft_shuffle(lst.a, lst.la);
// 	ft_launcher(&lst);
// 	free(lst.a);
// 	free(lst.b);
// 	return (0);
// }
