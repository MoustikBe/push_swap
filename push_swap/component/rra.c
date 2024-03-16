//(reverse rotate a) : Décale d’une position vers le bas tous les élements de
// la pile a. Le dernier élément devient le premier.


#include "../push_swap.h"

void rra(stack_list **stack_A)
{
	stack_list *last_before;
	stack_list *last;

	if(!*stack_A || !(*stack_A)->next)
		return ;
	
	last_before = *stack_A;
	while(last_before->next->next != NULL)
		last_before = last_before->next;
	
	last_before->next = NULL;
	last->next = *stack_A;
	*stack_A = last;
}