/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:43:38 by mpeanuts          #+#    #+#             */
/*   Updated: 2022/02/08 18:24:34 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../includes/stack.h"
# include "../libft/libft.h"

void	success_exit(t_stack *a, t_stack *b);
void	fail_exit(t_stack *a, t_stack *b);

void	filling_stack(t_stack *a, t_stack *b, int argc, char **argv);

#endif