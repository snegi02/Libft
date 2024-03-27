/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:37:16 by snegi             #+#    #+#             */
/*   Updated: 2023/11/20 12:37:18 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sr;
	int				i;

	i = 0;
	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (src == dest || n == 0)
		return (dest);
	if (src < dest && src + n > dest)
	{
		while (n--)
			de[n] = sr[n];
	}
	else
	{
		while (n--)
		{
			de[i] = sr[i];
			i++;
		}
	}
	return (dest);
}
