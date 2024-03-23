/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:06:16 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:41:16 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack_list **stack_A, t_stack_list **stack_B)
{
	t_stack_list	*first_b;

	if (!*stack_B)
		return ;
	first_b = *stack_B;
	*stack_B = (*stack_B)->next;
	first_b->next = *stack_A;
	*stack_A = first_b;
	write(1, "pa\n", 3);
}
