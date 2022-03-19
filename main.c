/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:37:36 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/19 20:13:04 by mpeanuts         ###   ########.fr       */
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
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (0);
	// printf("%d\n", argc);
	a = create_stack();
	b = create_stack();
	filling_stack(a, b, argc, argv);
	print_all_stacks(a, b);
	reverse_rotate_a(a);
	print_all_stacks(a, b);
	// printf("a top = %d, a bot = %d", a->top->data, a->bot->data);
	success_exit(a, b);
}
          