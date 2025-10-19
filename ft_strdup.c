/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:20:10 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/19 18:04:28 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*res;

	size = ft_strlen(s) + 1;
	res = (char *)malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	ft_memcpy(res, s, size);
	return (res);
}
