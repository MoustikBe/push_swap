/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:09:34 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:42:08 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_stack_list **stack_B, char c)
{
	t_stack_list	*last;

	if (!*stack_B || !(*stack_B)->next)
		return ;
	last = *stack_B;
	while (last->next != NULL)
		last = last->next;
	last->next = *stack_B;
	*stack_B = (*stack_B)->next;
	last->next->next = NULL;
	if (c == 'V')
		write(1, "rb\n", 3);
}
