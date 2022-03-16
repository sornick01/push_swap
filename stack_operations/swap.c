/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:16:08 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/11 20:39:09 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

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

void	swap_a(t_stack *a)
{
	if (a->top)
		if (a->top->next)
		{
			swap(a);
			ft_putendl_fd("sa", 1);
		}
}

void	swap_b(t_stack *b)
{
	if (b->top)
		if (b->top->next)
		{
			swap(b);
			ft_putendl_fd("sb", 1);
		}
}

void	swap_a_b(t_stack *a, t_stack *b)
{
	if (a->top || b->top)
	{
		if (a->top)
			if (a->top->next)
				swap(a);
		if (b->top)
			if (b->top->next)
				swap(b);
		ft_putendl_fd("ss", 1);
	}
}
