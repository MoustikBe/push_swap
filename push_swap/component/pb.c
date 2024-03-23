/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:07:30 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:41:23 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack_list **stack_A, t_stack_list **stack_B)
{
	t_stack_list	*first_a;

	if (!*stack_A)
		return ;
	first_a = *stack_A;
	*stack_A = (*stack_A)->next;
	first_a->next = *stack_B;
	*stack_B = first_a;
	write(1, "pb\n", 3);
}
