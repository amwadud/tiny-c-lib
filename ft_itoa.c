/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:22:53 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/20 04:42:59 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	str_size;
	char	tmp;

	i = 0;
	str_size = ft_strlen(str);
	while (i < (str_size / 2))
	{
		tmp = str[i];
		str[i] = str[str_size - 1 - i];
		str[str_size - 1 - i] = tmp;
		i++;
	}
	return (str);
}

static size_t	ft_getnumlen(int n)
{
	size_t	len;

	n /= 10;
	len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	ft_abs(int n)
{
	if (n > 0)
		return (n);
	return (-n);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*res;
	size_t	i;

	i = 0;
	res = malloc(ft_getnumlen(n) + 1 + (n < 0));
	sign = -1 * (n < 0) + (n >= 0);
	if (!res)
		return (NULL);
	if (n == 0)
		res[i++] = '0';
	while (n)
	{
		res[i++] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (sign == -1)
		res[i++] = '-';
	res[i] = '\0';
	ft_strrev(res);
	return (res);
}

/* int	main(void)
{
	char	*s;
	s = ft_itoa(-42);
#include <stdio.h>
	printf("%s\n", s);
}
*/
