/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpastor <elpastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:45:05 by elpastor          #+#    #+#             */
/*   Updated: 2021/11/26 18:16:34 by elpastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free(char **str)
{
	size_t	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
	return (NULL);
}

size_t	countchar(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

size_t	countword(char const *s, char c)
{
	size_t	i;
	size_t	word;
	size_t	count;

	i = -1;
	word = 0;
	count = 0;
	while (s[++i])
	{
		if (s[i] != c && !word)
		{
			count++;
			word = 1;
		}
		else if (s[i] == c)
			word = 0;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**str;

	str = (char **)malloc(sizeof(char *) * (countword(s, c) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		if (s[i] != c)
		{
			str[j] = (char *)malloc(countchar(&s[i], c) + 1);
			if (str[j] == NULL)
				return (ft_free(str));
			while (s[i] && s[i] != c)
				str[j][k++] = s[i++];
			str[j++][k] = 0;
		}
		else
			i++;
	}
	str[j] = 0;
	return (str);
}
