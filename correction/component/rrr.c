/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:13:37 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:42:41 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_stack_list **stack_A, t_stack_list **stack_B)
{
	if (!*stack_A || !*stack_B)
		return ;
	rra(stack_A, 'X');
	rrb(stack_B, 'X');
}
