#include "push_swap.h"
#include "libft/libft.h"

// Parcoure l'array crée aprés l'utilisation de split pour être sotcker dans la stack_A // 
void store_to_list(char **str, stack_list **stack_A)
{
	stack_list *new;
	int count = 0;
	int res_atoi;

	while (str[count])
	{
		new = malloc(sizeof(stack_list));
		if(!new)
			return ;
		new->content = malloc(sizeof(int));
		if(!new->content)
		{
			free(new);
			return ;
		}
		res_atoi = ft_atoi(str[count]);
		*(int *)(new->content) = res_atoi;
		add_to_stack(new, stack_A);
		count++;
	}
}

// Stocke le node creer dans store_to_list dans la Stack_A, tant que la chaine de caractere assembler n'a pas été complétement parcourus on crée un node par élément // 
void add_to_stack(stack_list *new, stack_list **stack_A)
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