/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:20:52 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/26 03:05:59 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	counter;
	char	*dest;

	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (!dest)
		return (NULL);
	counter = 0;
	while (counter < len)
	{
		*dest = *(s + counter + start);
		dest++;
		counter++;
	}
	*dest = '\0';
	return (dest - len);
}
