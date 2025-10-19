/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:20:24 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/19 07:08:20 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(const char *s, char c)
{
	size_t	i;
	size_t	count;

	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	n;
	size_t	count;
	char	**res;
	
	res = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j])
			j++;
		if (j > 0)
		{
			res[count] = (char *)malloc(j + 1); 
			ft_memcpy(res[count], s + i, j);
			count++;
		}
		i += j;
	}
	return (res);
}

int	main(void)
{
	char	**s = ft_split("  Hello world  ", ' ');
	size_t	i;
	#include <stdio.h>
	i = 0;
	while (s[i] != NULL)
	{
		printf("%s\n", s[i]);
		i++;
	}
}
