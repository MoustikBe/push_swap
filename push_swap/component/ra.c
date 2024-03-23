/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:08:08 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:42:02 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack_list **stack_A, char c)
{
	t_stack_list	*last;

	if (!*stack_A || !(*stack_A)->next)
		return ;
	last = *stack_A;
	while (last->next != NULL)
		last = last->next;
	last->next = *stack_A;
	*stack_A = (*stack_A)->next;
	last->next->next = NULL;
	if (c == 'V')
		write(1, "ra\n", 3);
}
