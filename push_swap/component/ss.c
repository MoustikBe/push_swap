/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:15:13 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:41:52 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_stack_list **stack_A, t_stack_list **stack_B)
{
	if (!*stack_A || !*stack_B)
		return ;
	sa(stack_A, 'X');
	sb(stack_B, 'X');
}
