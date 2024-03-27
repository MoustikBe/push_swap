/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:22:11 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/27 17:20:29 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_triage(char *str, int count)
{
	if (str[0] == '-' || str[0] == '+')
		count++;
	while (str[count])
	{
		if (str[count] == ' ')
			count++;
		if (str[count] == '\0')
			error();
		if (str[count] == '+' || str[count] == '-')
		{
			if (str[count - 1] != ' ' || str[count + 1] < '0'
				|| str[count] > '9')
			{
				free(str);
				error();
			}
			count++;
		}
		if ((str[count] < '0') || (str[count] > '9'))
		{
			free(str);
			error();
		}
		count++;
	}
}

int	is_sort(t_stack_list **Stack_A)
{
	t_stack_list	*temp;
	int				nb1;
	int				nb2;

	if (*Stack_A == NULL || (*Stack_A)->next == NULL)
		return (1);
	temp = *Stack_A;
	while (temp->next != NULL)
	{
		nb1 = temp->content;
		nb2 = temp->next->content;
		if (nb1 > nb2)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	num_check(t_stack_list **stack_A, int nb, int nb_com)
{
	t_stack_list	*first;
	t_stack_list	*temp;
	int				result;

	temp = *stack_A;
	first = *stack_A;
	while (first)
	{
		nb = first->content;
		temp = first->next;
		while (temp)
		{
			nb_com = temp->content;
			if (nb == nb_com)
			{
				free_ps(stack_A);
				error();
			}
			temp = temp->next;
		}
		first = first->next;
	}
	result = is_sort(stack_A);
	if (result)
		exit_sort(stack_A);
}
