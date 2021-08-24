/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:05:34 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/24 16:00:44 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *ptr1, const void *ptr2, size_t num )
{
	char	formated_ptr1[num + 1];
	char	formated_ptr2[num + 1];

	ft_memcpy(&formated_ptr1, &ptr1, num);
	ft_memcpy(&formated_ptr2, &ptr2, num);
	return (formated_ptr1 - formated_ptr2);
}
