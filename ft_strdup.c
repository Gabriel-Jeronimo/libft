/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:59:44 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/24 13:12:54 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*pointer;

	size = ft_strlen((char *) str) + 1;
	pointer = malloc(size);
	ft_strlcpy(pointer, str, size);
	return (pointer);
}
