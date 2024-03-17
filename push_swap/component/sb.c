// (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
//Ne fait rien s’il n’y en a qu’un ou aucun

#include "../push_swap.h"

void sb(stack_list **stack_B)
{
	stack_list *first;
	stack_list *second;
	
	if (!*stack_B || !(*stack_B)->next)
		return ;
	first = *stack_B;
	second = (*stack_B)->next;
	first->next = second->next;
	second->next = first;
	*stack_B = second;
}