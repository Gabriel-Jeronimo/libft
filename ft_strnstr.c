/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:28:55 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/25 19:00:58 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*string, const char *substring, size_t len)
{
	size_t	substring_len;
	size_t	counter;

	substring_len = ft_strlen((char *)substring);
	if (*substring == 0)
		return ((char *) string);
	while (substring_len <= len)
	{
		if (*string == *substring)
		{
			counter = 1;
			while (counter++)
			{
				if (counter == substring_len)
					return ((char *)string);
				if (string[counter] != substring[counter])
					break ;
			}
		}
		string++;
		len--;
	}
	return (NULL);
}
