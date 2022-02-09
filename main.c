/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:37:36 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/02/09 15:18:25 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

#include <unistd.h>
#include <time.h>

void	print_all_stacks(t_stack *a, t_stack *b)
{
	int	a_size = a->top_id + 1;
	int	b_size = b->top_id + 1;

	printf("----------------\na\t\tb\t\n\n");
	while (a_size > 0 || b_size > 0)
	{
		if (a_size > b_size)
		{
			--a_size;
			printf("|%d\t\t \t|\n",  a->array[a_size]);
		}
		else if (b_size > a_size)
		{
			--b_size;
			printf("|\t\t%d\t|\n",  b->array[b_size]);
		}
		else
		{
			--a_size;
			--b_size;
			printf("|%d\t\t%d\t|\n", a->array[a_size], b->array[b_size]);
		}
	}
	printf("________________\n\n");
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (0);
	printf("%d\n", argc);
	a = create_stack(argc - 1);
	b = create_stack(argc - 1);
	filling_stack(a, b, argc, argv);
	print_all_stacks(a, b);
	success_exit(a, b);
	// if (!check_overflow(argv[1]))
	// {
	// 	printf("overflow\n");
	// }
}
