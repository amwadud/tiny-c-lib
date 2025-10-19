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

	i = 0;
	count = 0;
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

static void	ft_free_words(char **words, size_t count)
{
	size_t i = 0;
	while (i < count)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	wlen;
	size_t	count;
	char	**res;

	res = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		wlen = 0;
		while (s[i + wlen] && s[i + wlen] != c)
			wlen++;
		if (wlen > 0)
		{
			res[count] = (char *)malloc(wlen + 1);
			if (!res[count])
			{
				return (NULL);
			}
			ft_memcpy(res[count], s + i, wlen);
			res[count][wlen] = '\0';
			count++;
		}
		i += wlen;
	}
	res[count] = NULL;
	return (res);
}

/* int	main(void)
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
} */
