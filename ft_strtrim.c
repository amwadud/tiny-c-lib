/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:18:14 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/19 23:49:21 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strany(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
		{
			return ((char *)set);
		}
		set++;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	char	*res;

	begin = 0;
	while (ft_strany(set, s1[begin]))
		begin++;
	end = ft_strlen(s1) - 1;
	while (ft_strany(set, s1[end]))
		end--;
	res = (char *)malloc(end - begin + 2);
	if (!res)
		return (NULL);
	ft_memcpy(res, s1 + begin, end - begin + 1);
	res[end - begin + 1] = '\0';
	return (res);
}

/*
int	main(void)
{
	char	*str;
	char	*str_trimmed;

	str = "\t \r Hello world\t  ";
	str_trimmed = ft_strtrim(str, "\t \r");
#include <assert.h>
#include <string.h>
	assert(!strcmp("Hello world", str_trimmed));
}
*/
