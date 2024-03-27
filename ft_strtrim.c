/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:38 by snegi             #+#    #+#             */
/*   Updated: 2023/11/21 14:04:40 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_character(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	while (s1[i] != '\0' && is_character(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1);
	while (j > i && is_character(s1[j - 1], set) == 1)
		j--;
	len = j - i;
	res = ft_substr(s1, i, len);
	return (res);
}
