/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:55:32 by snegi             #+#    #+#             */
/*   Updated: 2023/11/20 11:55:35 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sr;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	de = (unsigned char *)dest;
	i = 0;
	sr = (unsigned char *)src;
	while (i < n)
	{
		de[i] = sr[i];
		i++;
	}
	return (dest);
}
