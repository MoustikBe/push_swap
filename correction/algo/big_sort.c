/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:04:44 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 23:18:51 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max_bits(t_stack_list **stack)
{
	t_stack_list	*head;
	int				max;
	int				max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	sort_big(t_stack_list **Stack_A, t_stack_list **Stack_B)
{
	t_stack_list	*temp;
	int				nb_bit;
	int				count_for_bit;
	int				count_for_lst;
	int				size_lst;

	temp = *Stack_A;
	size_lst = lst_size(*Stack_A);
	count_for_bit = 0;
	nb_bit = get_max_bits(Stack_A);
	while (count_for_bit < nb_bit)
	{
		count_for_lst = 0;
		while (count_for_lst++ < size_lst)
		{
			temp = *Stack_A;
			if (((temp->index >> count_for_bit) & 1) == 1)
				ra(Stack_A, 'V');
			else
				pb(Stack_A, Stack_B);
		}
		while (lst_size(*Stack_B) != 0)
			pa(Stack_A, Stack_B);
		count_for_bit++;
	}
}
