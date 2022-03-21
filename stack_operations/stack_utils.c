/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:31:39 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/21 18:36:00 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

t_stack	*create_stack()
{
	t_stack	*new_stack;

	new_stack = (t_stack *)malloc(sizeof(t_stack_elem));
	if (!new_stack)
		return (NULL);
	new_stack->stack_size = 0;
	new_stack->bot = NULL;
	new_stack->top = NULL;
	return (new_stack);
}

t_stack_elem	*create_stack_elem(int data)
{
	t_stack_elem	*new_stack_elem;

	new_stack_elem = (t_stack_elem *)malloc(sizeof(t_stack_elem));
	if (!new_stack_elem)
		return (NULL);
	new_stack_elem->data = data;
	new_stack_elem->next = NULL;
	new_stack_elem->prev = NULL;
	return (new_stack_elem);
}

void	clear_stack(t_stack *stack)
{
	t_stack_elem	*tmp;

	while (stack->top != NULL)
	{
		tmp = stack->top;
		stack->top = stack->top->next;
		free(tmp);
	}
	free(stack);
}
