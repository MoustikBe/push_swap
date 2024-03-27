/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:03:49 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:48:15 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	main_algo(t_stack_list **Stack_A, t_stack_list **Stack_B)
{
	t_stack_list	*temp;
	int				size;

	temp = *Stack_A;
	size = lst_size(temp);
	if (size == 2)
		sort_2(Stack_A);
	if (size == 3)
		sort_3(Stack_A);
	if (size == 4)
		sort_4(Stack_A, Stack_B);
	if (size == 5)
		sort_5(Stack_A, Stack_B);
	if (size > 5)
		sort_big(Stack_A, Stack_B);
}
