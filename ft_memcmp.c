/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:21:24 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/25 01:23:04 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) != *((unsigned char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		i++;
	}
	return 0;
}

/*
#include "libft.h"
#include <assert.h>

int main(void)
{
    char a[] = "Hello";
    char b[] = "Hello";
    char c[] = "Helxo";

    // identical strings
    assert(ft_memcmp(a, b, 5) == 0);

    // different strings
    assert(ft_memcmp(a, c, 5) < 0); // 'l' - 'x' < 0

    // partial comparison
    assert(ft_memcmp(a, c, 3) == 0); // first 3 bytes equal

    return 0;
}
*/
