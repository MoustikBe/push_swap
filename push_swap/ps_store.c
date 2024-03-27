/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_store.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:20:31 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/27 17:21:55 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atol(const char *str, t_stack_list **stack_A)
{
	int			count;
	int			sign;
	long int	result;

	sign = 1;
	result = 0;
	count = 0;
	while (str[count] == ' ' || str[count] == '\t' || str[count] == '\r'
		|| str[count] == '\n' || str[count] == '\v' || str[count] == '\f')
		count++;
	if (str[count] == '+' || str[count] == '-')
		if (str[count++] == '-')
			sign = -1;
	while (str[count] >= '0' && str[count] <= '9' && str[count] != '\0')
	{
		result = result * 10 + (str[count] - '0');
		count++;
	}
	if (result > INT_MAX || result < INT_MIN)
	{
		free_ps(stack_A);
		error();
	}
	return (result * sign);
}

void	store_to_list(char **str, t_stack_list **stack_A)
{
	t_stack_list	*new;
	int				count;
	int				res_atoi;

	count = 0;
	while (str[count])
	{
		new = malloc(sizeof(t_stack_list));
		if (!new)
		{
			free(str);
			free_ps(stack_A);
			return ;
		}
		res_atoi = ft_atol(str[count], stack_A);
		new->content = res_atoi;
		add_to_stack(new, stack_A);
		count++;
	}
}

void	add_to_stack(t_stack_list *new, t_stack_list **stack_A)
{
	new->next = NULL;
	if (*stack_A == NULL)
	{
		*stack_A = new;
		return ;
	}
	while ((*stack_A)->next != NULL)
		stack_A = &((*stack_A)->next);
	(*stack_A)->next = new;
}
