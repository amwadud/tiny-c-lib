/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:21:31 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/25 01:38:02 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}

/*
#include <assert.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello, World!";
    char *p;

    // find 'W'
    p = ft_memchr(str, 'W', strlen(str));
    assert(p == str + 7);

    // find 'z' (not found)
    p = ft_memchr(str, 'z', strlen(str));
    assert(p == NULL);

    // n = 0
    p = ft_memchr(str, 'H', 0);
    assert(p == NULL);

    return 0;
}
*/
