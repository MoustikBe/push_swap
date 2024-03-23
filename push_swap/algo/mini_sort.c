/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:00:26 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:48:35 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_stack_list **stack_A)
{
	t_stack_list	*first;
	t_stack_list	*sec;
	int				higest;

	first = *stack_A;
	sec = (*stack_A)->next;
	higest = s_higest(*stack_A);
	if (first->content == higest)
		ra(stack_A, 'V');
	else if (sec->content == higest)
		rra(stack_A, 'V');
	if ((*stack_A)->content > (*stack_A)->next->content)
		sa(stack_A, 'V');
}

void	sort_4(t_stack_list **stack_A, t_stack_list **stack_B)
{
	t_stack_list	*f;
	int				min_nb;

	f = *stack_A;
	min_nb = s_lower(*stack_A);
	if (f->next->content == min_nb)
		ra(stack_A, 'V');
	else if (f->next->next->content == min_nb)
	{
		ra(stack_A, 'V');
		ra(stack_A, 'V');
	}
	else if (f->next->next->next->content == min_nb)
		rra(stack_A, 'V');
	pb(stack_A, stack_B);
	sort_3(stack_A);
	pa(stack_A, stack_B);
}

void	sort_5(t_stack_list **stack_A, t_stack_list **stack_B)
{
	t_stack_list	*f;
	int				min_nb;

	f = *stack_A;
	min_nb = s_lower(*stack_A);
	if (f->next->content == min_nb)
		ra(stack_A, 'V');
	else if (f->next->next->content == min_nb)
	{
		ra(stack_A, 'V');
		ra(stack_A, 'V');
	}
	else if (f->next->next->next->content == min_nb)
	{
		rra(stack_A, 'V');
		rra(stack_A, 'V');
	}
	else if (f->next->next->next->next->content == min_nb)
		rra(stack_A, 'V');
	pb(stack_A, stack_B);
	sort_4(stack_A, stack_B);
	pa(stack_A, stack_B);
}

void	sort_2(t_stack_list **stack_a)
{
	t_stack_list	*temp;

	temp = *stack_a;
	if (temp->content > temp->next->content)
		sa(stack_a, 'V');
	else
		return ;
}
