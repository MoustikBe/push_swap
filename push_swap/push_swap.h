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

// ---- Function base ---- //
int 			ft_triage(char *str);
void 			num_check(stack_list *stack_A);
void 			store_to_list(char **str, stack_list **stack_A);
void 			add_to_stack(stack_list *new, stack_list **stack_A);
int 			ft_strlen_c (char *str);
char			*ft_strjoin_c(char *s1, char *s2);
// ---- Function base ---- //
// ---- Function algo ---- //  
void 			pa(stack_list **stack_A, stack_list **stack_B);
void 			pb(stack_list **stack_A, stack_list **stack_B);
void 			sa(stack_list **stack_A);
void 			sb(stack_list **stack_B);
void 			ss(stack_list **stack_A, stack_list **stack_B);
void 			ra(stack_list **stack_A);
void 			rb(stack_list **stack_B);
void 			rr(stack_list **stack_A, stack_list **stack_B);
void 			rra(stack_list **stack_A);
void 			rrb(stack_list **stack_B);
void 			rrr(stack_list **stack_A, stack_list **stack_B);
// ---- Function algo ---- //

#endif 