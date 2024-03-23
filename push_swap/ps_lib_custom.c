/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lib_custom.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:18:28 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/22 22:19:42 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen_c(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

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
