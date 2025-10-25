/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:20:59 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/25 00:49:40 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*((unsigned char *)s + n) = (unsigned char)c;
	return (s);
}

/*
#include <assert.h>
#include <string.h>

int main(void)
{
    char buffer[20];

    // Test 1: fill with 'A'
    ft_memset(buffer, 'A', 10);
    buffer[10] = '\0';
    assert(strcmp(buffer, "AAAAAAAAAA") == 0);

    // Test 2: fill with 0 (null bytes)
    ft_memset(buffer, 0, 10);
    for (int i = 0; i < 10; i++)
        assert(buffer[i] == 0);

    // Test 3: fill part of a string
    char str[] = "Hello, World!";
    ft_memset(str + 7, '*', 5);
    assert(strcmp(str, "Hello, *****!") == 0);

    // Test 4: n = 0 (should do nothing)
    char str2[] = "Test";
    ft_memset(str2, 'X', 0);
    assert(strcmp(str2, "Test") == 0);

    return 0;
}
*/
