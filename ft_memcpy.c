/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpastor <elpastor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:31:38 by elpastor          #+#    #+#             */
/*   Updated: 2021/11/26 13:39:12 by elpastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*tmp1;
	char		*tmp2;

	i = 0;
	tmp1 = src;
	tmp2 = dest;
	while (i < n)
	{
		tmp2[i] = tmp1[i];
		i++;
	}
	return (dest);
}
