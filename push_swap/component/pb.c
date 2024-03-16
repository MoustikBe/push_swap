// (push b) : Prend le premier élément au sommet de a et le met sur b.
// Ne fait rien si a est vide.

#include "../push_swap.h"

void pb(stack_list **stack_A, stack_list **stack_B)
{
	stack_list *first_A;

	if(!*stack_A)
		return ;
	first_A = *stack_A;
	*stack_A = (*stack_A)->next;
	first_A->next = *stack_B;
	*stack_B = first_A;
} 