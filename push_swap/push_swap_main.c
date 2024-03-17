
#include "push_swap.h"
#include "libft/libft.h"

void put_space(int argc, int count, int delimeter, char *str)
{
	if(count < argc)
	{	
		delimeter = ft_strlen_c(str);
		str[delimeter] = ' ';
		str[delimeter + 1] = '\0';
	}
}


void push_swap(int argc, char **argv, int delimeter)
{
	static stack_list	*stack_A;
	static stack_list	*stack_B;
	int 				count;
	char 				*str;
	char 				**final_list;

	stack_A = NULL;
	stack_B = NULL;	
	final_list = NULL;
	str = malloc(1 * sizeof(char));
	if(!str)
		return ;
	count = 1;
	while(count < argc)
	{
		str = ft_strjoin_c(str, argv[count]);
		count++;
		put_space(argc, count, delimeter, str);
	}
	ft_triage(str, 0);
	final_list = ft_split(str, ' ');
	store_to_list(final_list, &stack_A);
	num_check(stack_A);
	// -- TEST -- //
	while(stack_A != NULL)
	{
		ft_printf("stack_A -> %d\n", *(int *)stack_A->content);
		stack_A = stack_A->next;
	}
	while(stack_B != NULL)
	{
		ft_printf("stack_B -> %d\n", *(int *)stack_B->content);
		stack_B = stack_B->next;
	}
	// -- TEST -- //
}


// # - MAIN - # //
int main(int argc, char **argv)
{
	if(argc <= 1)
		return(write(2, "ERROR\n", 6));
	push_swap(argc, argv, 0);
}
