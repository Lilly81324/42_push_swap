/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 19:54:33 by sikunne           #+#    #+#             */
/*   Updated: 2024/12/27 19:54:33 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <unistd.h>
# include <limits.h>

# include "./libft/libft.h"
# include "./libft/ft_printf/ft_printf.h"

typedef struct s_lst
{
	int	*a;
	int	la;
	int	*b;
	int	lb;
}	t_lst;

typedef struct s_instru
{
	char	*instructions;
	int		head;
	int		inst_count;
}	t_instru;

void	ft_launcher(t_lst *lst);
int		ft_is_list_order(int *list, int len);
int		ft_check_input(char **input);
void	ft_inpt_abort(char **array);
int		ft_atoi_check_one(char *nptr);
int		ft_atoi_check_two(const char *nptr, int i, int fac);
t_lst	*ft_prepare_lst(char **raw);
void	ft_print_array(int	*array, int length);

// writing instruction
void	ft_write_inst(char *input, t_instru *instru);
void	ft_swap(int *list, t_instru *instru, char which);
void	ft_rotate(int *list, int len, t_instru *instru, char which);
void	ft_rev_rotate(int *list, int len, t_instru *instru, char which);
void	ft_pusha(t_lst *lst, t_instru *instru);
void	ft_pushb(t_lst *lst, t_instru *instru);

// needed for brute forcing with few elements
void	ft_brute_sort_ext(t_lst *lst, t_instru *instru);
void	ft_brute_sort_base(t_lst *lst, t_instru *instru);
void	ft_brute_sort_doubles(t_lst *lst, t_instru *instru);
void	ft_brute_sort_insort(t_lst *lst, t_instru *instru);
int		ft_index_big(int *list, int len);
int		ft_index_smal(int *list, int len);
int		ft_next_big(int *list, int len, int min);

// needed for turk_sort
void	ft_turk_sort(t_lst *lst, t_instru *instru);
void	ft_handle_rotation(t_lst *lst, t_instru *instru);
int		ft_next_smal(int *list, int len, int max);
int		*ft_cross_moves(t_lst *lst, int i);
int		ft_best_case(int *cross);
int		ft_best_index(t_lst *lst);
int		ft_best_moves(int *cross);
int		ft_rr_moves(int a, int b);
void	ft_case_zero(t_lst *lst, t_instru *instru, int *cross);
void	ft_case_one(t_lst *lst, t_instru *instru, int *cross);
void	ft_case_two(t_lst *lst, t_instru *instru, int *cross);
void	ft_case_three(t_lst *lst, t_instru *instru, int *cross);
int		ft_min(int a, int b);
int		ft_max(int a, int b);

#endif