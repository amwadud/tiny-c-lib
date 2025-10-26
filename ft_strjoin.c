/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:19:58 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/26 10:59:32 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	resize;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	resize = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *)malloc(resize);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, resize);
	ft_strlcat(res, s2, resize);
	return (res);
}
