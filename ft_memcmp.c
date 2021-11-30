/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpastor <elpastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:34:55 by elpastor          #+#    #+#             */
/*   Updated: 2021/11/29 17:00:15 by elpastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*tmp1;
	char	*tmp2;

	if (n == 0)
		return (0);
	tmp1 = (char *)s1;
	tmp2 = (char *)s2;
	while (--n && *tmp1 == *tmp2)
	{
		tmp1++;
		tmp2++;
	}
	return (*tmp2 - *tmp1);
}
