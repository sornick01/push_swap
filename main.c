/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:37:36 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/21 20:52:55 by mpeanuts         ###   ########.fr       */
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
		printf("stack[%d]=%d\n", tmp_a->order, tmp_a->data);
		tmp_a = tmp_a->next;
	}
	printf("----------------\n");
	while (tmp_b)
	{
		// printf("debug_b\n");
		printf("stack[%d]=%d\n", tmp_b->order, tmp_b->data);
		tmp_b = tmp_b->next;
	}
	printf("\n\n\n");

}

void print_with_size(t_two_stacks *stacks)
{
	t_stack_elem	*tmp_a = stacks->a->top;
	t_stack_elem	*tmp_b = stacks->b->top;
	
	printf("size of stack a: %d\n", stacks->a->stack_size);
	while (tmp_a)
	{
		printf("stack[%d]=%d\n", tmp_a->order, tmp_a->data);
		tmp_a = tmp_a->next;	
	}
	printf("size of stack b: %d\n", stacks->b->stack_size);
	while (tmp_b)
	{
		printf("stack[%d]=%d\n", tmp_b->order, tmp_b->data);
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
	filling_stack(stacks, argc, argv);
	// print_with_size(stacks);
	// push_b(stacks);
	// push_b(stacks);
	// push_b(stacks);
	// push_b(stacks);
	// for (size_t i = 0; i < stacks->arr_size; i++)
	// {
	// 	printf("%d", stacks->sorted_array[i]);
	// }
	// printf("huy %d\n", upper_than_middle(stacks->a, stacks->a->stack_size, 40));
	start_sorting(stacks);
	// print_with_size(stacks);
	
	// print_all_stacks(stacks->a, stacks->b);
	// push_b(stacks);
	// push_b(stacks);
	// push_b(stacks);
	// print_all_stacks(stacks->a, stacks->b);
	// reverse_rotate_a(stacks);
	// reverse_rotate_b(stacks);
	// reverse_rotate_a_b(stacks);
	// print_all_stacks(stacks->a, stacks->b);

	// swap_a_b(stacks);
	// print_all_stacks(stacks->a, stacks->b);

	// printf("a top = %d, a bot = %d", a->top->data, a->bot->data);
	// for (size_t i = 0; i < stacks->arr_size; i++)
	// {
	// 	printf("%d ", stacks->sorted_array[i]);
	// }
	success_exit(stacks->a, stacks->b);
	
}
          