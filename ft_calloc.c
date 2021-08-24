/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:19:27 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/23 23:51:51 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*pointer;

	if (num <= 0 || size <= 0)
	{
		return (NULL);
	}
	pointer = malloc(num * size);
	ft_bzero(pointer, num * size);
	return (pointer);
}
