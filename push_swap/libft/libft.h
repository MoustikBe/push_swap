/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:36:25 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/17 15:06:12 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
// Import des biblio obliger // 
# include <stdio.h>
# include <stddef.h>
# include <unistd.h>
// ---------------- // 
// Biblio qui serve pour la verif // 
# include <stdlib.h>
# include <ctype.h>
# include <string.h>
// ---------------- // 
// - PARTIE POUR LE BONUS - //
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
// - PARTIE POUR LE BONUS - //
// ----- PART 1 ----- // 
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int alph);
int				ft_isalpha(int alp);
int				ft_isascii(int c);
int				ft_isdigit(int dig);
int				ft_isprint(int c);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(char *src);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlen(const char *s);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
// ----- PART 1 ----- // 
// ----- PART 2 ----- // 
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
// ----- PART 2 ----- // 
// ----- PART B ----- //
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(void *content);
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstadd_back(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
// ----- PART B ----- //
// ----- PRINTF ----- // 
int				ft_printf(const char *str, ...);
void			ft_putchar(int s, int *count_2);
void			ft_putstr(char *s, int *count_2);
void			ft_putnbr(int nbr, int *count_2);
void			ft_unsigned(unsigned int nbr, int *count_2);
void			ft_hexadecimal(unsigned int nbr, char *hexa, int *count_2);
void			ft_ptr_hexa(size_t nbr, char *hexa, int *count_2);
void			ft_ptr(size_t num, int *count_2);
// ----- PRINTF ------ // 
// ----- GET_NE ------ (manque la strcuture correcte)//
t_list	*mk_clean(t_list **lst);
void	add_to_lst(t_list **lst, char *buff, int readed, int count);
void	count_for_line(t_list *lst, char **line);
void	read_store(int fd, t_list **lst);
void	free_all(t_list *lst);
void	reset_lst(t_list **lst, int count, int count_2, t_list *clean);
void	define_line(t_list *lst, char **line);
char	*get_next_line(int fd);
char	*so_free(t_list **lst);
int		found_a_count(t_list *lst, const char *str, int flag, int count);
// ----- GET_NE ------ // 
#endif
