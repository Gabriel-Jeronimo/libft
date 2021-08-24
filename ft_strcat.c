/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:06:44 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/18 17:34:25 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	size;

	size = ft_strlen(dest);
	counter = 0;
	while (src[counter] != 0)
	{
		dest[size + counter] = src[counter];
		counter++;
	}
	dest[size + counter] = '\0';
	return (dest);
}
