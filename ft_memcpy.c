/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:21:18 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/25 01:18:21 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n--)
		*((unsigned char *)dst + n) = *((unsigned char *)src + n);
	return (dst);
}

/*
#include <assert.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    char src[20] = "Hello, World!";
    char dst[20];

    // Test 1: normal copy
    ft_memcpy(dst, src, 14); // include '\0'
    assert(strcmp(dst, src) == 0);

    // Test 2: partial copy
    ft_memcpy(dst, src, 5);
    dst[5] = '\0';
    assert(strcmp(dst, "Hello") == 0);

    // Test 3: copy zero bytes (should do nothing)
    char buffer[10] = "Test";
    ft_memcpy(buffer, src, 0);
    assert(strcmp(buffer, "Test") == 0);

    // Test 4: larger buffer
    char large_src[50] = "This is a longer string for testing memcpy.";
    char large_dst[50];
    ft_memcpy(large_dst, large_src, strlen(large_src) + 1);
    assert(strcmp(large_dst, large_src) == 0);

    printf("All ft_memcpy tests passed!\n");
    return 0;
}
*/
