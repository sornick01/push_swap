/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:06:52 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/02/07 20:13:57 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include <stdio.h> //убрать
# include "../libft/libft.h"

typedef struct s_stack
{
	int			top_id;
	int			*array;
}	t_stack;

t_stack	*create_stack(size_t size);
void	clear_stack(t_stack *stack);

void	swap_a(t_stack *a);
void	swap_b(t_stack *b);
void	swap_a_b(t_stack *a, t_stack *b);

void	push(t_stack *stack, int data);
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);

void	rotate_a(t_stack *a);
void	rotate_b(t_stack *b);
void	rotate_a_b(t_stack *a, t_stack *b);

void	reverse_rotate_a(t_stack *a);
void	reverse_rotate_b(t_stack *b);
void	reverse_rotate_a_b(t_stack *a, t_stack *b);

#endif