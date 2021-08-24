/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:28:55 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/23 22:22:13 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*string, const char *substring, size_t len)
{
	int	a;
	int	counter;

	counter = 0;
	if (substring[counter] == 0)
		return ((char *) string);
	else
	{
		while (string[counter] != 0 && counter < (int) len)
		{
			if (substring[counter] == string[counter])
			{
				a = counter;
				while (substring[a] == string[a] || substring[a] == 0)
				{
					if (a >= (int) len)
					{
						break ;
					}
					if (substring[a] == 0)
						return ((char *) string);
					a++;
				}
			}
			string++;
			counter++;
		}
	}
	return (NULL);
}
