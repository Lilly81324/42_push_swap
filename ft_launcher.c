/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 19:51:01 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 19:51:01 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

// launches the different sorting algorithms based on the length
// of the list
// add "ft_print_array(lst->a, lst->la);" for visual at start and end
void	ft_launcher(t_lst *lst)
{
	t_instru	instru;

	instru.instructions = (char *)ft_calloc(400000, sizeof(char));
	instru.head = 0;
	instru.inst_count = 0;
	if (lst->la < 2 || ft_is_list_order(lst->a, lst->la) == 1)
	{
	}
	else if (lst->la == 2)
		ft_swap(lst->a, &instru, 'a');
	else if (lst->la >= 3 && lst->la <= 10)
		ft_brute_sort_ext(lst, &instru);
	else
		ft_turk_sort(lst, &instru);
	ft_printf("%s", instru.instructions);
	free(instru.instructions);
}
