/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:14:37 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:41:44 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack_list **stack_B, char c)
{
	t_stack_list	*first;
	t_stack_list	*second;

	if (!*stack_B || !(*stack_B)->next)
		return ;
	first = *stack_B;
	second = (*stack_B)->next;
	first->next = second->next;
	second->next = first;
	*stack_B = second;
	if (c == 'V')
		write(1, "sb\n", 3);
}
