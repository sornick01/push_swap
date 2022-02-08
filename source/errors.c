/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:22:33 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/02/07 22:02:59 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	fail_exit(t_stack *a, t_stack *b)
{
	ft_putendl_fd("Error", 2);
	clear_stack(a);
	clear_stack(b);
	exit(EXIT_FAILURE);
}

void	success_exit(t_stack *a, t_stack *b)
{
	clear_stack(a);
	clear_stack(b);
	exit(EXIT_SUCCESS);
}
