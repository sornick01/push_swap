/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:26:29 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 19:11:07 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_includes/stack_bonus.h"

static void	reverse_rotate(t_stack *stack)
{
	t_stack_elem	*tmp;

	tmp = stack->bot;
	stack->bot = stack->bot->prev;
	stack->bot->next = NULL;
	tmp->prev = NULL;
	tmp->next = stack->top;
	stack->top->prev = tmp;
	stack->top = tmp;
}

void	reverse_rotate_a(t_two_stacks *stacks)
{
	if (stacks->a->top && stacks->a->top->next)
	{
		reverse_rotate(stacks->a);
	}
}

void	reverse_rotate_b(t_two_stacks *stacks)
{
	if (stacks->b->top && stacks->b->top->next)
	{
		reverse_rotate(stacks->b);
	}
}

void	reverse_rotate_a_b(t_two_stacks *stacks)
{
	if (stacks->a->top || stacks->b->top)
	{
		if (stacks->a->top && stacks->a->top->next)
		{
			reverse_rotate(stacks->a);
		}
		if (stacks->b->top && stacks->b->top->next)
		{
			reverse_rotate(stacks->b);
		}
	}
}
