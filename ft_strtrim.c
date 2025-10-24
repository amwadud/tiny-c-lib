/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:18:14 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/24 23:32:10 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		end;

	if (!s1 || !set)
		return (NULL);
	begin = 0;
	while (s1[begin] && ft_strchr(set, s1[begin]))
		begin++;
	end = ft_strlen(s1) - 1;
	while (end > begin && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, begin, end - begin + 1));
}

/* int	main(void)
{
	char	*res = ft_strtrim("  \tHello World\tkk  \t  ", NULL);
#include <stdio.h>
	printf("%p\n", res);
	free(res);
} */
