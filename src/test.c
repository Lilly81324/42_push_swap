#include "sorting.h"

// write down the given 2 or 3 letter input with a \n
// character into the instru object and update according
void	ft_write_inst(char *input, t_instru *instru)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		instru->instructions[instru->head] = input[i];
		instru->head++;
		i++;
	}
	(*instru).instructions[(*instru).head] = '\n';
	(*instru).inst_count++;
	(*instru).head++;
}



int	main(void)
{
	t_instru instru;
	t_lst lst;

	instru.head = 0;
	instru.inst_count = 0;
	instru.instructions = (char *)malloc(100 * sizeof(char));
	lst.la = 2;
	lst.a = (int *)malloc(lst.la * sizeof(int));
	lst.a[0] = 1;
	lst.a[1] = 2;
	lst.lb = 2;
	lst.b = (int *)malloc(lst.lb * sizeof(int));
	lst.b[0] = 3;
	lst.b[1] = 4;
	printf("Array A: %i %i length: %i\n", lst.a[0], lst.a[1], lst.la);
	printf("Array B: %i %i length: %i\n", lst.b[0], lst.b[1], lst.lb);
	ft_write_inst("ab\0", &instru);
	printf("Array A: %i %i length: %i\n", lst.a[0], lst.a[1], lst.la);
	printf("Array B: %i %i length: %i\n", lst.b[0], lst.b[1], lst.lb);
	printf("%s %i %i\n", instru.instructions, instru.inst_count, instru.head);
	free(instru.instructions);
	free(lst.a);
	free(lst.b);
}
