/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:20:24 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/26 18:46:40 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef short int	bool;

static size_t	ft_countchunks(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static bool	ft_freechunks(char* current, char **words, size_t count)
{
	bool	freed;

	freed = 0;
	if (!current)
	{
		while (count--)
			free(words[count]);
		free(words);
		freed = 1;
	}
	return (freed);
}

static char	*ft_strdupmv_chunk(const char **s, char c)
{
	char	*res;
	size_t	len;

	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, *s, len + 1);
	*s += len;
	return (res);
}

static char	ft_skip_delims(const char **s, char c)
{
	while (**s && **s == c)
		(*s)++;
	return (**s);
}

char	**ft_split(char const *s, char c)
{
	char	**chunks;
	size_t	i;

	if (!s)
		return (NULL);
	chunks = malloc(sizeof(char *) * (ft_countchunks(s, c) + 1));
	if (!chunks)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (!ft_skip_delims(&s, c))
			break;
		chunks[i] = ft_strdupmv_chunk(&s, c);
		if (ft_freechunks(chunks[i], chunks, i))
			return (NULL);
		i++;
	}
	chunks[i] = NULL;
	return (chunks);
}
