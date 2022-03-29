/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:37:36 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 19:43:14 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_two_stacks	*stacks;

	stacks = (t_two_stacks *)malloc(sizeof(t_two_stacks));
	stacks->sorted_array = NULL;
	if (argc == 1)
		return (0);
	stacks->a = create_stack();
	stacks->b = create_stack();
	filling_stack(stacks, argc, argv);
	start_sorting(stacks);
	success_exit(stacks);
}
