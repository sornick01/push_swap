/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:36:58 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 19:00:27 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_includes/push_swap_bonus.h"

int	check_sorted(t_two_stacks *stacks)
{
	t_stack_elem	*tmp;

	if (stacks->b->top)
		return (0);
	tmp = stacks->a->top;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_two_stacks	*stacks;

	stacks = (t_two_stacks *)malloc(sizeof(t_two_stacks));
	if (argc == 1)
		return (0);
	stacks->a = create_stack();
	stacks->b = create_stack();
	filling_stack(stacks, argc, argv);
	get_commands(stacks);
	if (check_sorted(stacks))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	success_exit(stacks);
}
