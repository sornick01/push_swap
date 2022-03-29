/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:30:21 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/03/29 18:53:29 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "./stack_bonus.h"
# include "./get_next_line_bonus.h"

int		ft_isdigit(int c);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	fail_exit(t_two_stacks *stacks);
void	success_exit(t_two_stacks *stacks);

int		check_overflow(char *num);
int		are_numbers(int argc, char **argv);
int		are_unique(int size, int *nums);

void	filling_stack(t_two_stacks *stacks, int argc, char **argv);

void	get_commands(t_two_stacks *stacks);
int		check_sorted(t_two_stacks *stacks);

#endif