/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:06:42 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/24 15:34:16 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	counter;
	unsigned int	size_total;

	counter = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	size_total = size_dest + size_src;
	if (size > size_dest)
	{
		while (size_dest < size - 1 && src[counter] != '\0')
		{
			dest[size_dest] = src[counter];
			counter++;
			size_dest++;
		}
		dest[size_dest] = '\0';
		return (size_total);
	}
	return (size + size_src);
}
