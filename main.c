/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:37:36 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/20 19:05:38 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

#include <unistd.h>
#include <time.h>

void	print_all_stacks(t_stack *a, t_stack *b)
{
	printf("\n\n\n");
	t_stack_elem	*tmp_a = a->top;
	t_stack_elem	*tmp_b = b->top;

	// printf("debug\n");
	while (tmp_a)
	{
		// printf("debug_a\n");
		printf("%d\n", tmp_a->data);
		tmp_a = tmp_a->next;
	}
	printf("----------------\n");
	while (tmp_b)
	{
		// printf("debug_b\n");
		printf("%d\n", tmp_b->data);
		tmp_b = tmp_b->next;
	}
	printf("\n\n\n");

}

int	main(int argc, char **argv)
{
	// t_stack	*a;
	// t_stack	*b;
	t_two_stacks	*stacks = (t_two_stacks *)malloc(sizeof(t_two_stacks));
	
	int		*array;

	if (argc == 1)
		return (0);
	// printf("%d\n", argc);
	stacks->a = create_stack();
	stacks->b = create_stack();
	filling_stack(stacks->a, stacks->b, argc, argv);
	print_all_stacks(stacks->a, stacks->b);
	push_b(stacks);
	push_b(stacks);
	push_b(stacks);
	print_all_stacks(stacks->a, stacks->b);
	swap_a(stacks);
	swap_b(stacks);
	print_all_stacks(stacks->a, stacks->b);

	swap_a_b(stacks);
	print_all_stacks(stacks->a, stacks->b);

	// printf("a top = %d, a bot = %d", a->top->data, a->bot->data);
	success_exit(stacks->a, stacks->b);
}
          