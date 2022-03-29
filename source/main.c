/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:37:36 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 18:48:35 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	print_all_stacks(t_stack *a, t_stack *b)
// {
// 	t_stack_elem	*tmp_a = a->top;
// 	t_stack_elem	*tmp_b = b->top;

// 	// printf("debug\n");
// 	while (tmp_a)
// 	{
// 		// printf("debug_a\n");
// 		printf("stack[%d]=%d\n", tmp_a->order, tmp_a->data);
// 		tmp_a = tmp_a->next;
// 	}
// 	printf("----------------\n");
// 	while (tmp_b)
// 	{
// 		// printf("debug_b\n");
// 		printf("stack[%d]=%d\n", tmp_b->order, tmp_b->data);
// 		tmp_b = tmp_b->next;
// 	}
// 	printf("\n\n\n");

// }

// void	print_with_size(t_two_stacks *stacks)
// {
// 	t_stack_elem	*tmp_a = stacks->a->top;
// 	t_stack_elem	*tmp_b = stacks->b->top;
// 	printf("size of stack a: %d\n", stacks->a->stack_size);
// 	while (tmp_a)
// 	{
// 		printf("stack[%d]=%d\n", tmp_a->order, tmp_a->data);
// 		tmp_a = tmp_a->next;	
// 	}
// 	printf("size of stack b: %d\n", stacks->b->stack_size);
// 	while (tmp_b)
// 	{
// 		printf("stack[%d]=%d\n", tmp_b->order, tmp_b->data);
// 		tmp_b = tmp_b->next;
// 	}
// 	printf("\n\n\n");
// }

int	main(int argc, char **argv)
{
	t_two_stacks	*stacks;

	stacks = (t_two_stacks *)malloc(sizeof(t_two_stacks));
	if (argc == 1)
		return (0);
	stacks->a = create_stack();
	stacks->b = create_stack();
	filling_stack(stacks, argc, argv);
	start_sorting(stacks);
	success_exit(stacks);
}
