/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:46:41 by snegi             #+#    #+#             */
/*   Updated: 2023/11/20 14:46:43 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	look;
	int		i;

	look = (char)(c);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == look)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == look)
		return ((char *)(s + i));
	return (NULL);
}
