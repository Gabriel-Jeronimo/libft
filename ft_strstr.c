/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:06:38 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/18 17:06:53 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;

	if (*to_find == 0)
		return (str);
	else
	{
		while (*str != 0)
		{
			if (*to_find == *str)
			{
				a = 0;
				while (to_find[a] == str[a] || to_find[a] == 0)
				{
					if (to_find[a] == 0)
						return (str);
					a++;
				}
			}
			str++;
		}
	}
	return (0);
}
