/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 13:13:34 by gjeronim          #+#    #+#             */
/*   Updated: 2021/09/07 15:19:12 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*mystrtok(char *s, char d)
{
	static char	*input;
	char		*result;
	int			i;

	if (s != NULL)
		input = s;
	if (input == NULL)
		return (NULL);
	result = (char *)malloc(ft_strlen(input) + 1);
	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] != d)
			result[i] = input[i];
		else
		{
			result[i] = '\0';
			input = input + i + 1;
			return (result);
		}
		i++;
	}
	result[i] = '\0';
	input = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		counter;
	char	*ptr;

	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !c || !result)
		return (NULL);
	ptr = mystrtok((char *) s, c);
	counter = 0;
	while (ptr != NULL)
	{
		if (*ptr != '\0')
		{
			result[counter] = ptr;
			counter++;
		}
		ptr = mystrtok(NULL, c);
	}
	result[counter] = NULL;
	return (result);
}
