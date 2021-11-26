/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpastor <elpastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:50:40 by elpastor          #+#    #+#             */
/*   Updated: 2021/11/24 14:26:55 by elpastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = -1;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (++i < len)
		str[i] = s[i + start];
	str[i] = 0;
	return (str);
}
