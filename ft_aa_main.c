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

// main function that checks for error is input
// and launches the programm after making the lst obj
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
		write(STDERR_FILENO, "Error\n", 6);
		return (0);
	}
	lst = ft_prepare_lst(raw);
	ft_launcher(lst);
	free(lst->a);
	free(lst->b);
	free(lst);
	return (0);
}
