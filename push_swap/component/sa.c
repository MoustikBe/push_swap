// (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
// Ne fait rien s’il n’y en a qu’un ou aucun

#include "../push_swap.h"

void sa(stack_list **stack_A)
{
	stack_list *first;
	stack_list *second;
	
	if (!*stack_A || !(*stack_A)->next)
		return ;
	first = *stack_A;
	second = (*stack_A)->next;
	first->next = second->next;
	second->next = first;
	*stack_A = second;
}