
#include "push_swap.h"
#include "libft/libft.h"
/*
void push_swap()
{
	
}
*/

// MAIN ->  ! A TRIER ! // 
int main(int argc, char **argv)
{
	static stack_list	*stack_A = NULL;
	static stack_list	*stack_B = NULL;
	int 			count = 1;
	int				delimeter = 0;
	int 			tchecker = 0; 

	char *str = "";
	char **final_list = NULL;

	if(argc <= 1)
	{
		ft_printf("ERROR, you need to give something\n");
		return 0;
	}
	str = malloc(1 * sizeof(char));
	if(!str)
		return 0;
	count = 1;
	while(count < argc)
	{
		str = ft_strjoin_c(str, argv[count]);
		count++;
		if(count < argc)
		{	
			delimeter = ft_strlen_c(str);
			str[delimeter] = ' ';
			str[delimeter + 1] = '\0';
		}
	}
	tchecker = ft_triage(str);
	if (tchecker == 1)
		return 0;
	final_list = ft_split(str, ' ');
	ft_printf("%s\n", str);
	count = 0;
	while(final_list[count])
	{
		ft_printf("%s\n", final_list[count]);
		count++;
	} 
	store_to_list(final_list, &stack_A);
	
	// -- WORK IN PROGRESS -- // 
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
