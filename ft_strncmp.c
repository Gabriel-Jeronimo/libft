/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:06:36 by gjeronim          #+#    #+#             */
/*   Updated: 2021/09/01 13:03:14 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[counter] != 0 && s1[counter] == s2[counter]) && counter < n - 1)
	{
		counter++;
	}
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}
