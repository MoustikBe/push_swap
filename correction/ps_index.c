/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:17:56 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:48:55 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_index(t_stack_list **stA)
{
	t_stack_list	*comparer;
	t_stack_list	*compared;
	int				index;

	comparer = *stA;
	while (comparer)
	{
		index = 1;
		compared = *stA;
		while (compared)
		{
			if (comparer->content > compared->content)
				index++;
			compared = compared->next;
		}
		comparer->index = index;
		comparer = comparer->next;
	}
}
