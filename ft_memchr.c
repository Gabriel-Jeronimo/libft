/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:40:29 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/23 22:20:39 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *string, int character, size_t len)
{
	size_t	counter;
	char	*navigable_string;

	counter = 0;
	navigable_string = (char *) string;
	while (*navigable_string + counter != '\0' && counter < len)
	{
		if (*(navigable_string + counter) == (char) character)
			return (navigable_string + counter);
		counter++;
	}
	return (NULL);
}
