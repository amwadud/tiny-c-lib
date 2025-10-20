/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:20:24 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/20 05:19:05 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			break;
		count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

/* static void	ft_freewords(char **words, size_t count)
{
	while (count--)
		free(words[count]);
	free(words);
} */

size_t	ft_wordlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	*ft_dupwrd(const char *word, size_t len)
{
	char	*res;

	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, word, len + 1);
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	**res;

	res = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!res)
		return (NULL);
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break;
		res[count++] = ft_dupwrd(s + i, ft_wordlen(s + i, ' '));
		/* if (!res)
		{
			ft_freewords(res, count);
			return (NULL);
		} */
		i += ft_wordlen(s + i, ' ');
	}
	res[count] = NULL;
	return (res);
}

/* 
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
*/
