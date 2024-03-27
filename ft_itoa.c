/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:42:17 by snegi             #+#    #+#             */
/*   Updated: 2023/11/24 11:42:20 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*strrev(char *str, int len)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	j = len - 1;
	if (str[0] == '-')
		i = 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

static char	*int_str(char *res, int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		res[0] = '-';
		i++;
	}
	while (n > 0)
	{
		res[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	res[i] = '\0';
	res = strrev(res, i);
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	len = lenght(n);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res = int_str(res, n);
	return (res);
}
