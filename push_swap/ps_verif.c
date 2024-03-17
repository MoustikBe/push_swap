#include "push_swap.h"
#include "libft/libft.h"

int ft_triage(char *str)
{
	int count = 0;

	while(str[count])
	{
		if (str[count] == ' ')
		{
			count++;
		}
		if(str[count] == '\0')
			return 0;
		if(str[count] == '+' || str[count] == '-')
		{
			if(str[count - 1] != ' ' || str[count + 1] < '0' || str[count] > '9')
			{
				ft_printf("ERROR, you nbr is not ok\n");
				free(str);
				return 1; 
			}
			else
				count++;
		}
		if ((str[count] < '0') || (str[count] > '9'))
		{
			ft_printf("ERROR, you're passing a letter\n");
			free(str);
			return 1; 
		}
		count++;
	}
	return 0;
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
			{
				ft_printf("Nombre similaire detecter\n ");
				return ;
			}
			temp = temp->next;
		}
		first = first->next;
	}
}