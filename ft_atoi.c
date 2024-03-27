/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:48:20 by snegi             #+#    #+#             */
/*   Updated: 2023/11/20 14:48:21 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char s)
{
	int	i;

	i = 0;
	if (s == '\t' || s == '\r' || s == '\v' || s == '\f')
		i = 1;
	return (i);
}

int	ft_atoi(const char *s)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	while (s[i] == ' ' || s[i] == '\n' || is_space(s[i]) == 1)
		i++;
	result = 0;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	return (sign * result);
}
