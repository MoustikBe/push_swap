// (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.
// Le premier élément devient le dernier.


#include "../push_swap.h"

void ra(stack_list **stack_A)
{
	stack_list *last;

	if(!*stack_A || !(*stack_A)->next)
		return ;
	
	last = *stack_A;
	while(last->next != NULL)
		last = last->next;
	last->next = *stack_A;
	*stack_A = (*stack_A)->next; 
	last->next->next = NULL;

}