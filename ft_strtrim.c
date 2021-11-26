/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpastor <elpastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:46:29 by elpastor          #+#    #+#             */
/*   Updated: 2021/11/24 15:58:50 by elpastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	istrim(char const c, char const *set)
{
	size_t	i;

	i = -1;
	while (set[++i])
		if (c == set[i])
			return (1);
	return (0);
}

size_t	count(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && istrim(s1[i], set))
		i++;
	while (istrim(s1[j], set))
		j--;
	if (i < j)
		return (j - i + 1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(count(s1, set) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && istrim(s1[i], set))
		i++;
	j = -1;
	while (++j < count(s1, set))
		str[j] = s1[i + j];
	str[j] = 0;
	return (str);
}
