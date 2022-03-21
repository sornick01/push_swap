/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:43:38 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/21 20:44:34 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../includes/stack.h"
# include "../libft/libft.h"




void	success_exit(t_stack *a, t_stack *b);
void	fail_exit(t_stack *a, t_stack *b);

int		check_overflow(char *num);
int		are_numbers(int argc, char **argv);
int		are_unique(int size, int *nums);
int		is_sorted(int size, int *nums);

// void	filling_stack(t_stack *a, t_stack *b, int argc, char **argv);
void	filling_stack(t_two_stacks *stacks, int argc, char **argv);

void	quick_sort(int *arr, int left, int right);
void	big_sort_back(t_two_stacks *stacks);
void	big_sort(t_two_stacks *stacks, int var);
void	start_sorting(t_two_stacks *stacks);
int	upper_than_middle(t_stack *stack, int size, int order);

#endif