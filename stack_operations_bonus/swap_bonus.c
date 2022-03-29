/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:16:08 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 17:34:31 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_includes/stack_bonus.h"

static void	swap(t_stack *stack)
{
	t_stack_elem	*new_top;

	if (stack->top->next == stack->bot)
	{
		new_top = stack->bot;
		new_top->next = stack->top;
		new_top->prev = NULL;
		stack->top->prev = new_top;
		stack->top->next = NULL;
		stack->bot = stack->top;
		stack->top = new_top;
	}
	else
	{
		new_top = stack->top->next;
		stack->top->next = new_top->next;
		stack->top->prev = new_top;
		new_top->next = stack->top;
		new_top->prev = NULL;
		stack->top = new_top;
	}
}

// static void	swap(t_stack *stack)
// {
// 	t_stack_elem	*new_top;
// 	int				tmp;

// 	tmp = stack->top->data;
// 	stack->top->data = stack->top->next->data;
// 	stack->top->next->data = tmp;
// }

// void	swap_a(t_stack *a)
// {
// 	if (a->top && a->top->next)
// 	{
// 		swap(a);
// 		ft_putendl_fd("sa", 1);
// 	}
// }

void	swap_a(t_two_stacks *stacks)
{
	if (stacks->a->top && stacks->a->top->next)
	{
		swap(stacks->a);
	}
}

// void	swap_b(t_stack *b)
// {
// 	if (b->top && b->top->next)
// 	{
// 		swap(b);
// 		ft_putendl_fd("sb", 1);
// 	}
// }

void	swap_b(t_two_stacks *stacks)
{
	if (stacks->b->top && stacks->b->top->next)
	{
		swap(stacks->b);
	}
}

void	swap_a_b(t_two_stacks *stacks)
{
	if (stacks->a->top || stacks->b->top)
	{
		if (stacks->a->top)
			if (stacks->a->top->next)
				swap(stacks->a);
		if (stacks->b->top)
			if (stacks->b->top->next)
				swap(stacks->b);
	}
}
