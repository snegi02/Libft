/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:36:59 by snegi             #+#    #+#             */
/*   Updated: 2023/11/20 13:37:01 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	j = ft_strlen(dst);
	if (size <= j || size == 0)
		return (len + size);
	len = len + j;
	while (i < ((size - j) - 1) && src[i] != '\0')
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (len);
}
