/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:57:20 by misaac-c          #+#    #+#             */
/*   Updated: 2024/03/15 00:13:03 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	return (c + 32 * (c >= 'A' && c <= 'Z'));
}
/*
int main(void)
{
	int result = ft_tolower('2');
	int result2 = tolower('2');
	printf("%d\n", result);
	printf("%d\n", result2);
}
*/
