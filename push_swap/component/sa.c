/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:13:57 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:41:35 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack_list **stack_A, char c)
{
	t_stack_list	*first;
	t_stack_list	*second;

	if (!*stack_A || !(*stack_A)->next)
		return ;
	first = *stack_A;
	second = (*stack_A)->next;
	first->next = second->next;
	second->next = first;
	*stack_A = second;
	if (c == 'V')
		write(1, "sa\n", 3);
}
