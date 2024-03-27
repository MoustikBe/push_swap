/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:27:49 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/27 17:25:18 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
// -- LIBRARY -- //
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
// -- LIBRARY -- //
// -- STRUCT -- //
typedef struct stack
{
	int				content;
	int				index;
	struct stack	*next;
	struct stack	*stack_a;
	struct stack	*stack_b;
}					t_stack_list;
// -- STRUCT -- //
// ---- Function base ---- //
void			ft_triage(char *str, int count);
void			num_check(t_stack_list **stack_A, int nb, int nb_com);
void			store_to_list(char **str, t_stack_list **stack_A);
void			add_to_stack(t_stack_list *new, t_stack_list **stack_A);
int				ft_strlen_c(char *str);
char			*ft_strjoin_c(char *s1, char *s2);
void			error(void);
void			exit_sort(t_stack_list **stA);
int				is_sort(t_stack_list **Stack_A);
void			free_ps(t_stack_list **stA);
void			to_index(t_stack_list **stA);
char			**ft_split_ps(char const *s, char c);
void			free_flst(char **str, char *st);
// ---- Function base ---- //
// ---- Function moov ---- //  
void			pa(t_stack_list **stack_A, t_stack_list **stack_B);
void			pb(t_stack_list **stack_A, t_stack_list **stack_B);
void			sa(t_stack_list **stack_A, char c);
void			sb(t_stack_list **stack_B, char c);
void			ss(t_stack_list **stack_A, t_stack_list **stack_B);
void			ra(t_stack_list **stack_A, char c);
void			rb(t_stack_list **stack_B, char c);
void			rr(t_stack_list **stack_A, t_stack_list **stack_B);
void			rra(t_stack_list **stack_A, char c);
void			rrb(t_stack_list **stack_B, char c);
void			rrr(t_stack_list **stack_A, t_stack_list **stack_B);
// ---- Function moov ---- //  
// ---- Function algo ---- //
void			main_algo(t_stack_list **Stack_A, t_stack_list **Stack_B);
int				s_lower(t_stack_list *stack_A);
int				s_higest(t_stack_list *stack_A);
int				lst_size(t_stack_list *stack_A);
int				get_max_bits(t_stack_list **stack);
void			sort_2(t_stack_list **stack_a);
void			sort_3(t_stack_list **stack_A);
void			sort_4(t_stack_list **stack_A, t_stack_list **stack_B);
void			sort_5(t_stack_list **stack_A, t_stack_list **stack_B);
void			sort_big(t_stack_list **Stack_A, t_stack_list **Stack_B);
// ---- Function algo ---- //  
#endif
