/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:18:14 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/20 06:48:57 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		end;
	char	*res;

	if (!s1)
		return (NULL);
	if (!set || !*set)
		return ft_strdup(s1);
	begin = 0;
	while (s1[begin] && ft_strchr(set, s1[begin]))
		begin++;
	end = ft_strlen(s1) - 1;
	while (end > begin && ft_strchr(set, s1[end]))
		end--;
	res = (char *)malloc(end - begin + 2);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + begin, end - begin + 2);
	return (res);
}
// TODO: FINISH THIS.
int	main(void)
{
	char	*res = ft_strtrim("  \tHello World\tkk  \t  ", " \t");
#include <stdio.h>
	printf("%s\n", res);
	free(res);
}
