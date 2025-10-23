/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:23:46 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/23 05:08:28 by abait-el         ###   ########.fr       */
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
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	res = 0;
	while (ft_isdigit(str[i]))
	{
		res = (res * 10) + (*(str + i) - '0');
		i++;
	}
	return (res * sign);
}

/*
int	main(void)
{
	#include <stdio.h>
	printf("%i", ft_atoi("  +987\n"));
	printf("%i", atoi("  +987\n"));
	printf("%i", atoi("987\n"));
}
*/
