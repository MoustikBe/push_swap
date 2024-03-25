/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:10:57 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:42:26 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack_list **stack_A, char c)
{
	t_stack_list	*last_before;
	t_stack_list	*last;

	last_before = *stack_A;
	last = *stack_A;
	if (!*stack_A || !(*stack_A)->next)
		return ;
	while (last->next != NULL)
	{
		last_before = last;
		last = last->next;
	}
	last_before->next = NULL;
	last->next = *stack_A;
	*stack_A = last;
	if (c == 'V')
		write(1, "rra\n", 4);
}
