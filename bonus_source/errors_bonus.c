/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:22:33 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 18:52:47 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_includes/push_swap_bonus.h"

void	fail_exit(t_two_stacks *stacks)
{
	ft_putendl_fd("Error", 2);
	clear_stack(stacks->a);
	clear_stack(stacks->b);
	free(stacks);
	exit(EXIT_FAILURE);
}

void	success_exit(t_two_stacks *stacks)
{
	clear_stack(stacks->a);
	clear_stack(stacks->b);
	free(stacks);
	exit(EXIT_SUCCESS);
}
