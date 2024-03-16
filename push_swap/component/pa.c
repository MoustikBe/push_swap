// (push a) : Prend le premier élément au sommet de b et le met sur a.
// Ne fait rien si b est vide.

#include "../push_swap.h"

void pa(stack_list **stack_A, stack_list **stack_B)
{
	stack_list *first_B;

	if(!*stack_B)
		return ;
	first_B = *stack_B;
	*stack_B = (*stack_B)->next;
	first_B->next = *stack_A;
	*stack_A = first_B;  
} 