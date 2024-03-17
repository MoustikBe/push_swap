//sa et sb en même temps.

#include "../push_swap.h"

void ss(stack_list **stack_A, stack_list **stack_B)
{
	if(!*stack_A || !*stack_B)
		return;
	sa(stack_A);
	sb(stack_B);
}