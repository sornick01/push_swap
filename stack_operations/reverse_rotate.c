/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:26:29 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/02/07 20:00:45 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

static void	reverse_rotate(t_stack *stack)
{
	int	tmp;
	int	i;
	int	j;

	i = stack->top_id;
	if (i > 0)
	{
		j = 0;
		tmp = stack->array[j];
		while (j < i)
		{
			stack->array[j] = stack->array[j + 1];
			++j;
		}
		stack->array[j] = tmp;
	}
}

void	reverse_rotate_a(t_stack *a)
{
	if (a->top_id > 0)
	{
		reverse_rotate(a);
		ft_putendl_fd("rra", 1);
	}
}

void	reverse_rotate_b(t_stack *b)
{
	if (b->top_id > 0)
	{
		reverse_rotate(b);
		ft_putendl_fd("rrb", 1);
	}
}

void	reverse_rotate_a_b(t_stack *a, t_stack *b)
{
	if (a->top_id > 0 || b->top_id > 0)
	{
		reverse_rotate(a);
		reverse_rotate(b);
		ft_putendl_fd("rrr", 1);
	}
}
