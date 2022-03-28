/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:36:58 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/28 22:14:36 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus_includes/push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_two_stacks	*stacks;

	stacks = (t_two_stacks *)malloc(sizeof(t_two_stacks));
	if (argc == 1)
		return (0);
	stacks->a = create_stack();
	stacks->b = create_stack();
	filling_stack(stacks, argc, argv);
}
