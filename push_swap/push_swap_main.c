/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:23:59 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/23 17:52:24 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_space(int argc, int count, int delimeter, char *str)
{
	if (count < argc)
	{
		delimeter = ft_strlen_c(str);
		str[delimeter] = ' ';
		str[delimeter + 1] = '\0';
	}
}

void	push_swap(int argc, char **argv, t_stack_list **stA, t_stack_list **stB)
{
	int		delimeter;
	int		count;
	char	*str;
	char	**final_list;

	delimeter = 0;
	final_list = NULL;
	str = malloc(1 * sizeof(char));
	if (!str)
		return ;
	count = 1;
	while (count < argc)
	{
		str = ft_strjoin_c(str, argv[count]);
		count++;
		put_space(argc, count, delimeter, str);
	}
	ft_triage(str, 0);
	final_list = ft_split_ps(str, ' ');
	free(str);
	store_to_list(final_list, stA);
	free(final_list);
	num_check(stA, 0, 0);
	to_index(stA);
	main_algo(stA, stB);
}

int	main(int argc, char **argv)
{
	t_stack_list	*stack_a;
	t_stack_list	*stack_b;

	if (argc <= 1)
		return (0);
	push_swap(argc, argv, &stack_a, &stack_b);
	free_ps(&stack_a);
}
