/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:08:10 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/02/07 20:00:48 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

void	push(t_stack *stack, int data)
{
	stack->array[++stack->top_id] = data;
}

void	push_a(t_stack *a, t_stack *b)
{
	if (b->top_id > -1)
	{
		a->array[++a->top_id] = b->array[b->top_id--];
		ft_putendl_fd("pa", 1);
	}
}

void	push_b(t_stack *a, t_stack *b)
{
	if (a->top_id > -1)
	{
		b->array[++b->top_id] = a->array[a->top_id--];
		ft_putendl_fd("pb", 1);
	}
}
