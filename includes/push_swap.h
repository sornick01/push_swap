/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:43:38 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/02/09 17:52:51 by mpeanuts         ###   ########.fr       */
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

void	filling_stack(t_stack *a, t_stack *b, int argc, char **argv);

#endif
