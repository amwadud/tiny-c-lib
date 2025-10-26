/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:20:24 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/26 11:29:18 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *s, char c)
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

static void	ft_freewords(char **words, size_t count)
{
	while (count--)
		free(words[count]);
	free(words);
}

static char	*ft_dupmvword(const char **s, char c)
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

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		res[i] = ft_dupmvword(&s, c);
		if (!res)
		{
			ft_freewords(res, i);
			return (NULL);
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}
