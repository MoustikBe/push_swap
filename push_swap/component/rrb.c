//: Décale d’une position vers le bas tous les élements de
//la pile b. Le dernier élément devient le premier.


#include "../push_swap.h"

void rrb(stack_list **stack_B)
{
	stack_list *last_before;
	stack_list *last;

	if(!*stack_B || !(*stack_B)->next)
		return ;
	
	last_before = *stack_B;
	while(last_before->next->next != NULL)
		last_before = last_before->next;
	
	last_before->next = NULL;
	last->next = *stack_B;
	*stack_B = last;
}