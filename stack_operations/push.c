/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:08:10 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/20 18:53:25 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

int	push_value(t_stack *stack, int data)
{
	t_stack_elem	*new;

	new = create_stack_elem(data);
	if (!new)
		return(0);
	if (!(stack)->top)
	{
		(stack)->top = new;
		(stack)->bot = new;
	}
	else
	{
		(stack)->top->prev = new;
		new->next = (stack)->top;
		(stack)->top = new;
	}
	return(1);
}

static void	push_elem(t_stack *dest , t_stack *source)
{
	t_stack_elem	*tmp;

	tmp = source->top;
	source->top = source->top->next;
	if (source->top)
		source->top->prev = NULL;
	if (!dest->top)
	{
		tmp->next = NULL;
		tmp->prev = NULL;
		dest->top = tmp;
	 	dest->bot = tmp;
	}
	else
	{
		tmp->next = dest->top;
		dest->top->prev = tmp;
		dest->top = tmp;
	}
}

// void	push_a(t_stack *a, t_stack *b)
// {
// 	if (b->top)
// 	{
// 		push_elem(a, b);
// 		ft_putendl_fd("pa", 1);
// 	}
// }

void	push_a(t_two_stacks *stacks)
{
	if (stacks->b->top)
	{
		push_elem(stacks->a, stacks->b);
		ft_putendl_fd("pa", 1);
	}
}

// void	push_b(t_stack *a, t_stack *b)
// {
// 	if (a->top)
// 	{
// 		push_elem(b, a);
// 		ft_putendl_fd("pb", 1);
// 	}
// }

void	push_b(t_two_stacks *stacks)
{
	if (stacks->a->top)
	{
		push_elem(stacks->b, stacks->a);
		ft_putendl_fd("pb", 1);
	}
}