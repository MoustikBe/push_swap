
#include "push_swap.h"
#include "libft/libft.h"
/*
void push_swap()
{
	
}
*/

// Calcul la longeur de la chaine passer en parametre // 
int ft_strlen_c (char *str)
{
	int count = 0;

	while(str[count])
		count++;
	return(count);
}

// Suite de str_join //
static char	*suite_join_c(char *s1, char *s2, char *new_char, int len1)
{
	int	count;

	count = 0;
	if (s1 && s2)
	{
		while (s1[count] != '\0')
		{
			new_char[count] = s1[count];
			count++;
		}
		count = 0;
		while (s2[count] != '\0')
		{
			new_char[len1] = s2[count];
			count++;
			len1++;
		}
		new_char[len1] = '\0';
		return (new_char);
	}
	return (new_char);
}
// Relie deux chaine de caractere passer en parametre en 1 seule, on passe chaque argument 1 par 1 pour addition au fur et a mesure les arguments //
char	*ft_strjoin_c(char *s1, char *s2)
{
	int		len1;
	int		len2;
	char	*new_char;

	len1 = ft_strlen_c(s1);
	len2 = ft_strlen_c(s2);
	new_char = malloc((len1 + len2 + 2) * sizeof(char));
	if (new_char == NULL)
		return (NULL);
	suite_join_c(s1, s2, new_char, len1);
	return (new_char);
}

// Stocke le node creer dans store_to_list dans la Stack_A, tant que la chaine de caractere assembler n'a pas été complétement parcourus on crée un node par élément // 
void add_to_stack(stack_list *new, stack_list **stack_A)
{
	new->next = NULL;
	if (*stack_A == NULL)
	{
		*stack_A = new;
		return ;
	}
	while ((*stack_A)->next != NULL)
		stack_A = &((*stack_A)->next);
	(*stack_A)->next = new;
}

// Parcoure l'array crée aprés l'utilisation de split pour être sotcker dans la stack_A // 
void store_to_list(char **str, stack_list **stack_A)
{
	stack_list *new;
	int count = 0;
	int res_atoi;

	while (str[count])
	{
		new = malloc(sizeof(stack_list));
		if(!new)
			return ;
		new->content = malloc(sizeof(int));
		if(!new->content)
		{
			free(new);
			return ;
		}
		res_atoi = ft_atoi(str[count]);
		*(int *)(new->content) = res_atoi;
		add_to_stack(new, stack_A);
		count++;
	}
}

// Fonction de vérification des arguments passer // 
int ft_triage(char *str)
{
	int count = 0;

	while(str[count])
	{
		if (str[count] == ' ')
		{
			count++;
		}
		if(str[count] == '\0')
			return 0;
		if(str[count] == '+' || str[count] == '-')
		{
			if(str[count - 1] != ' ' || str[count + 1] < '0' || str[count] > '9')
			{
				printf("ERROR, you nbr is not ok\n");
				free(str);
				return 1; 
			}
			else
				count++;
		}
		if ((str[count] < '0') || (str[count] > '9'))
		{
			printf("ERROR, you're passing a letter\n");
			free(str);
			return 1; 
		}
		count++;
	}
	return 0;
}
// WORK IN PROGRESS // 
num_check(stack_list *stack_A)
{
	int nb;

	while (stack_A)
	{
		nb = stack_A->content;
		
		stack_A = stack_A->next;
	}
	

}
// WORK IN PROGRESS //

// MAIN ->  ! A TRIER ! // 
int main(int argc, char **argv)
{
	static stack_list	*stack_A = NULL;
	// ------- TEMPO FOR TEST ------- //
	static stack_list	*stack_B = NULL;
	// ------- TEMPO FOR TEST ------- //
	int 			count = 1;
	int				delimeter = 0;
	int 			tchecker = 0; 

	char *str = "";
	char **final_list = NULL;

	if(argc <= 1)
	{
		printf("ERROR, you need to give something\n");
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
	printf("%s\n", str);
	count = 0;
	while(final_list[count])
	{
		printf("%s\n", final_list[count]);
		count++;
	} 
	store_to_list(final_list, &stack_A);
	
	// -- WORK IN PROGRESS -- // 
	num_check(stack_A);
	// -- TEST -- //
	while(stack_A != NULL)
	{
		printf("stack_A -> %d\n", *(int *)stack_A->content);
		stack_A = stack_A->next;
	}
	while(stack_B != NULL)
	{
		printf("stack_B -> %d\n", *(int *)stack_B->content);
		stack_B = stack_B->next;
	}
	// -- TEST -- //
}
