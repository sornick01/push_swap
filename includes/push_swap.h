/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:43:38 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 19:01:01 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../includes/stack.h"

int		ft_isdigit(int c);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	fail_exit(t_two_stacks *stacks);
void	success_exit(t_two_stacks *stacks);

int		check_overflow(char *num);
int		are_numbers(int argc, char **argv);
int		are_unique(int size, int *nums);
int		is_sorted(int size, int *nums);

void	filling_stack(t_two_stacks *stacks, int argc, char **argv);

void	quick_sort(int *arr, int left, int right);
void	big_sort_back(t_two_stacks *stacks);
void	big_sort(t_two_stacks *stacks, int var);
void	start_sorting(t_two_stacks *stacks);
int		upper_than_middle(t_stack *stack, int size, int order);
void	sort_two(t_two_stacks *stack);
void	sort_three(t_two_stacks *stack);
void	sort_five(t_two_stacks *stacks);

#endif