/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:03:51 by snegi             #+#    #+#             */
/*   Updated: 2023/11/21 13:03:52 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*join(char const *s1, char const *s2, int total, char *res)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < total && s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (i < total && s2[j] != '\0')
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len1;
	int		len2;
	int		len;

	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len = len1 + len2;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	return (join(s1, s2, len, res));
}
