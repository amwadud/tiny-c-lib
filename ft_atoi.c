/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:23:46 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/22 10:09:46 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		res;
	int		sign;

	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	sign = 1 - 2 * (str[i] == '-');
	res = 0;
	/* if (str[i] == '-' || str[i] == '+')
		i++; */
 	while (ft_isdigit(str[i]) || str[i] == '+' || str[i] == '-')
	{
		res = ((res * 10) + (*(str + i) - '0')) * ft_isdigit(str[i]);
		i++;
		// i++;
	}
	return (res * sign);
}

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_atoi("-51"));
	printf("%i\n", ft_atoi("+51"));
	printf("%i\n", ft_atoi("51"));
}
