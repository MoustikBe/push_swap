//(rotate b) : Décale d’une position vers le haut tous les élements de la pile b.
// Le premier élément devient le dernier.

#include "../push_swap.h"

void rb(stack_list **stack_B)
{
	stack_list *last;

	if(!*stack_B || !(*stack_B)->next)
		return ;
	
	last = *stack_B;
	while(last->next != NULL)
		last = last->next;
	last->next = *stack_B;
	*stack_B = (*stack_B)->next; 
	last->next->next = NULL;
}