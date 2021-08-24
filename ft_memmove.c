/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:47:07 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/24 13:23:40 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*navigable_dest;
	char	*navigable_src;
	size_t	counter;

	navigable_dest = (char *) dest;
	navigable_src = (char *) src;
	counter = 0;
	while (navigable_dest[counter] != 0 && counter < n)
	{
		navigable_dest[counter] = navigable_src[counter];
		counter++;
	}
	return (dest);
}
