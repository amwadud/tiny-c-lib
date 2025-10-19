/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:19:58 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/19 18:06:37 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	resize;

	resize = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *)malloc(resize);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, resize);
	ft_strlcat(res, s1, resize);
	return (res);
}

int	main(void)
{
	char	*s1 = "Hello ";
	char	*s2 = "World";
	char	*us = ft_strjoin(s1, s2);
#include <stdio.h>
	printf("%s\n", us);
}
