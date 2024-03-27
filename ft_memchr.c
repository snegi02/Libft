/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:47:31 by snegi             #+#    #+#             */
/*   Updated: 2023/11/20 14:47:32 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	look;
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)(s);
	look = (unsigned char)(c);
	while (i < n)
	{
		if (str[i] == look)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
