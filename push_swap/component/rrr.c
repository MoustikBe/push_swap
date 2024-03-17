// rra et rrb en même temps.
#include "../push_swap.h"

void rrr(stack_list **stack_A, stack_list **stack_B)
{
	if(!*stack_A || !*stack_B)
		return;
	rra(stack_A);
	rrb(stack_B);
}