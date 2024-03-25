/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:57:34 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:48:48 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	lst_size(t_stack_list *stack_A)
{
	t_stack_list	*temp;
	int				size;

	temp = stack_A;
	size = 0;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}

int	s_higest(t_stack_list *stack_A)
{
	t_stack_list	*temp;
	int				nb;
	int				comp_val;

	temp = stack_A;
	comp_val = temp->content;
	while (temp)
	{
		nb = temp->content;
		if (nb > comp_val)
			comp_val = nb;
		temp = temp->next;
	}
	return (comp_val);
}

int	s_lower(t_stack_list *stack_A)
{
	t_stack_list	*temp;
	int				nb;
	int				comp_val;

	temp = stack_A;
	comp_val = temp->content;
	while (temp)
	{
		nb = temp->content;
		if (nb < comp_val)
			comp_val = nb;
		temp = temp->next;
	}
	return (comp_val);
}
/*
void print_stack(stack_list *stack_A)
{
    stack_list *temp = stack_A; 

    while (temp != NULL)
    {
        //ft_printf("stack_A -> %d\n", temp->content);
        temp = temp->next;
    }
}
*/