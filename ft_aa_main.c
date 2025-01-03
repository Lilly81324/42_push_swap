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

// creates copy of argvs on heap to pass into functions
static char	**copy_argv(int argc, char *argv[])
{
	int		i;
	char	**copy;

	i = 1;
	copy = (char **)malloc(sizeof(char *) * (argc));
	while (i < argc)
	{
		copy[i - 1] = ft_strdup(argv[i]);
		i++;
	}
	copy[argc - 1] = NULL;
	return (copy);
}

// programm can handle up to 500 elements before slowing down
// main function that checks for error is input
// and launches the programm after making the lst obj
int	main(int argc, char *argv[])
{
	t_lst	*lst;
	char	**raw;
	int		i;

	if (argc == 1)
		return (0);
	if (argc == 2)
		raw = ft_split(argv[1], ' ');
	if (argc > 2)
		raw = copy_argv(argc, argv);
	if (ft_check_input(raw) == 0)
	{
		ft_inpt_abort(raw);
		write(STDERR_FILENO, "Error\n", 6);
		return (0);
	}
	lst = ft_prepare_lst(raw);
	ft_launcher(lst);
	ft_inpt_abort(raw);
	free(lst->a);
	free(lst->b);
	free(lst);
	return (0);
}
