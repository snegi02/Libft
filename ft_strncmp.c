/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:47:13 by snegi             #+#    #+#             */
/*   Updated: 2023/11/20 14:47:14 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	a1;
	unsigned char	a2;

	i = 0;
	while (n > 0 && n > i && s1[i] != '\0' && s2[i] != '\0')
	{
		a1 = (unsigned char)s1[i];
		a2 = (unsigned char)s2[i];
		if (a1 > a2)
			return (1);
		else if (a1 < a2)
			return (-1);
		i++;
	}
	if (n > i)
	{
		if (s1[i] == '\0' && s2[i] != '\0')
			return (-1);
		else if (s1[i] != '\0' && s2[i] == '\0')
			return (1);
	}
	return (0);
}
