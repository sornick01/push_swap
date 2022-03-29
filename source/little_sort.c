/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:28:16 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 19:03:28 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_two(t_two_stacks *stack)
{
	swap_a(stack);
}

void	sort_three(t_two_stacks *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->a->top->data;
	b = stack->a->top->next->data;
	c = stack->a->top->next->next->data;
	if (a > b && c > b && c > a)
		swap_a(stack);
	else if (a > b && a > c && b > c)
	{
		swap_a(stack);
		reverse_rotate_a(stack);
	}
	else if (a > b && c > b && a > c)
		rotate_a(stack);
	else if (a < b && a < c && b > c)
	{
		swap_a(stack);
		rotate_a(stack);
	}
	else if (a < b && a > c && b > c)
		reverse_rotate_a(stack);
}

void	sort_five(t_two_stacks *stacks)
{
	while (stacks->b->stack_size != 2)
	{
		if (stacks->a->top->order == 1 || stacks->a->top->order == 5)
			push_b(stacks);
		else
			rotate_a(stacks);
	}
	sort_three(stacks);
	push_a(stacks);
	push_a(stacks);
	if (stacks->a->top->order == 5)
		rotate_a(stacks);
	else
	{
		swap_a(stacks);
		rotate_a(stacks);
	}
}
