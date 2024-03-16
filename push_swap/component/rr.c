//  ra et rb en même temps.
#include "../push_swap.h"

void rr(stack_list **stack_A, stack_list **stack_B)
{
	if(!*stack_A || !*stack_B)
		return;
	ra(stack_A);
	rb(stack_B);
}