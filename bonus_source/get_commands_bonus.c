/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_commands_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:40:10 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 18:55:49 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_includes/push_swap_bonus.h"

static void	command_error(t_two_stacks *stacks, char *command)
{
	free(command);
	fail_exit(stacks);
}

static void	execute_command(t_two_stacks *stacks, char *command)
{
	if (!(ft_strncmp(command, "sa\n", 3)))
		swap_a(stacks);
	else if (!(ft_strncmp(command, "sb\n", 3)))
		swap_b(stacks);
	else if (!(ft_strncmp(command, "ss\n", 3)))
		swap_a_b(stacks);
	else if (!(ft_strncmp(command, "pa\n", 3)))
		push_a(stacks);
	else if (!(ft_strncmp(command, "pb\n", 3)))
		push_b(stacks);
	else if (!(ft_strncmp(command, "ra\n", 3)))
		rotate_a(stacks);
	else if (!(ft_strncmp(command, "rb\n", 3)))
		rotate_b(stacks);
	else if (!(ft_strncmp(command, "rr\n", 3)))
		rotate_a(stacks);
	else if (!(ft_strncmp(command, "rra\n", 4)))
		reverse_rotate_a(stacks);
	else if (!(ft_strncmp(command, "rrb\n", 4)))
		reverse_rotate_b(stacks);
	else if (!(ft_strncmp(command, "rrr\n", 4)))
		reverse_rotate_a_b(stacks);
	else
		command_error(stacks, command);
}

void	get_commands(t_two_stacks *stacks)
{
	char	*command;

	command = get_next_line(0);
	while (command)
	{
		execute_command(stacks, command);
		free(command);
		command = get_next_line(0);
	}
}
