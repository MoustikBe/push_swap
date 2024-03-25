/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:12:40 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:42:33 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack_list **stack_B, char c)
{
	t_stack_list	*last_before;
	t_stack_list	*last;

	last = NULL;
	if (!*stack_B || !(*stack_B)->next)
		return ;
	last_before = *stack_B;
	while (last_before->next->next != NULL)
		last_before = last_before->next;
	last_before->next = NULL;
	last->next = *stack_B;
	*stack_B = last;
	if (c == 'V')
		write(1, "rrb\n", 4);
}
