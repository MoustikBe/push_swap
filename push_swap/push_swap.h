#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct stack
{
	int				*content;
	struct stack	*next;
	struct stack	*Stack_A;
	struct stack	*Stack_B;
}					stack_list;


void pa(stack_list **stack_A, stack_list **stack_B);

#endif 