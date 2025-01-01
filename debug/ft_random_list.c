/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikunne <sikunne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 17:04:51 by sikunne           #+#    #+#             */
/*   Updated: 2025/01/01 16:52:15 by sikunne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Create a list of len elements in ascending order from 1 to len
int	*ft_make_list(int len)
{
	int	i;
	int	*list;

	i = 0;
	list = (int *)malloc(len * sizeof(int));
	while (i < len)
	{
		list[i] = i + 1;
		i++;
	}
	return (list);
}

// Randomize the elements of the array 
// by switching all elements with a random one
int	*ft_shuffle(int *list, int length)
{
	int	i;
	int	temp;
	int	swap_index;

	i = 0;
	srand(time(NULL));
	while (i < length)
	{
		swap_index = rand() % length;
		temp = list[i];
		list[i] = list[swap_index];
		list[swap_index] = temp;
		i++;
	}
	return (list);
}

// outputs randomized list elements in order
// seperated by one space except at end
// move randlist into desired directory or specify path
// use "ARG=$(./randlist 500); ./push_swap $ARG"
// replace 500 by whatever length you want ()
int	main(int argc, char *argv[])
{
	int	i;
	int	n;
	int	*list;

	i = 0;
	n = 10;
	if (argc > 1)
		n = atoi(argv[1]);
	list = ft_shuffle(ft_make_list(n), n);
	while (i < n)
	{
		printf("%i", list[i]);
		if (i < n - 1)
			printf(" ");
		i++;
	}
	return (0);
}
