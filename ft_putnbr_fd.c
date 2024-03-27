/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snegi <snegi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:09:35 by snegi             #+#    #+#             */
/*   Updated: 2023/11/24 10:09:36 by snegi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*ft_str(char *str, int len)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	i = len - 1;
	while (j < i)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
		i--;
	}
	return (str);
}

static void	int_str(int n, int fd)
{
	char	str[1024];
	int		i;
	int		len;

	i = 0;
	len = 0;
	len = lenght(n);
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	ft_str(str, len);
	write (fd, str, len);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	else if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	int_str(n, fd);
}
