/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:16:22 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/23 17:43:40 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_ps(t_stack_list **stA)
{
	t_stack_list	*current;
	t_stack_list	*next;

	current = *stA;
	if (stA == NULL || *stA == NULL)
	{
		error();
		return ;
	}
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stA = NULL;
}

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	exit_sort(t_stack_list **stA)
{
	t_stack_list	*current;
	t_stack_list	*next;

	current = *stA;
	if (stA == NULL || *stA == NULL)
	{
		error();
		return ;
	}
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stA = NULL;
	exit(0);
}
