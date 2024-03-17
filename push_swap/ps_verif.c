#include "push_swap.h"
#include "libft/libft.h"

void ft_triage(char *str, int count)
{
	while(str[count])
	{
		if (str[count] == ' ')
			count++;
		if(str[count] == '\0')
			error();
		if(str[count] == '+' || str[count] == '-')
		{
			if(str[count - 1] != ' ' || str[count + 1] < '0' || str[count] > '9')
			{
				error();
				free(str);
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

void num_check(stack_list *stack_A)
{
	int nb = 0;
	int nb_com = 0;
	stack_list *first; 
	stack_list *temp;

	temp = stack_A;
	first = stack_A;
	while (first)
	{
		nb = *first->content;
		temp = first->next;
		while(temp)
		{
			nb_com = *temp->content; 
			if(nb == nb_com)
				error();
			temp = temp->next;
		}
		first = first->next;
	}
}
