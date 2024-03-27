/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:10:22 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:42:18 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_stack_list **stack_A, t_stack_list **stack_B)
{
	if (!*stack_A || !*stack_B)
		return ;
	ra(stack_A, 'X');
	rb(stack_B, 'X');
}
