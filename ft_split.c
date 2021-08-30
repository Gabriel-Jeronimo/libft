/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 13:13:34 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/27 13:32:50 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *find_next_delimiter(char const *s, char c)
{
	while (*s != 0 && *s != c)
	{
		s++;
	}
	if (*s == 0)
		return NULL;
	return (char *)s;
}

char **ft_split(char const *s, char c)
{
	char * pointer_next;

	pointer_next = find_next_delimiter(s, c);
	while (pointer_next)
	{
		
	}
}
