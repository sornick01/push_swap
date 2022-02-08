/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:37:36 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/02/08 20:12:08 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

#include <unistd.h>
#include <time.h>

void	print_all_stacks(t_stack *a, t_stack *b)
{
	int	a_size = a->top_id + 1;
	int	b_size = b->top_id + 1;

	printf("----------------\na\t\tb\t\n\n");
	while (a_size > 0 || b_size > 0)
	{
		if (a_size > b_size)
		{
			--a_size;
			printf("|%d\t\t \t|\n",  a->array[a_size]);
		}
		else if (b_size > a_size)
		{
			--b_size;
			printf("|\t\t%d\t|\n",  b->array[b_size]);
		}
		else
		{
			--a_size;
			--b_size;
			printf("|%d\t\t%d\t|\n", a->array[a_size], b->array[b_size]);
		}
	}
	printf("________________\n\n");
}

void	clear_args(char **args, size_t index)
{
	while (insdex >= 0)
	{
		free(args[index]);
		--index;
	}
	free(args);
}

char	**read_args_from_argv(int argc, char **argv)
{
	char	**args;
	size_t	i;

	i = 0;
	args = (char **)malloc(sizeof(char *) * (argc - 1));
	if (!args)
		return (NULL);
	while (i < argc - 1)
	{
		args[i] = ft_strdup(argv[i + 1]);
		if (!args[i])
		{
			clear_args(args, i - 1);
			return (NULL);
		}
		++i;
	}
	return (args);
}

char	**copy_args_from_argv(int argc, char **argv)
{
	char	**args;
	size_t	i;

	i = 1;
	if (argc == 2)
	{
		args = ft_split(argv[1]);
		if (!args)
			return (NULL );
	}
	else
	{
		args = read_args_from_argv(argc, argv);
		if (!args)
			return (NULL);
	}
}

int	main(int argc, char **argv)
{
	char	**args;
	t_stack	*a;
	t_stack	*b;
	
	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		args = ft_split(argv[1]);
		if (!args)
			return (0);
	else
	{
		while (/* condition */)
		{
			/* code */
		}
		
	}
	a = create_stack(argc - 1);
	b = create_stack(argc - 1);
	filling_stack(a, b, argc, argv);
	print_all_stacks(a, b);
	success_exit(a, b);
	// if (!check_overflow(argv[1]))
	// {
	// 	printf("overflow\n");
	// }
}
