/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:21:08 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/25 00:55:42 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s)
		while (n--)
			d[n] = s[n];
	else
		while (n--)
			*(d++) = *(s++);

	return (dst);
}

/*
#include <stdio.h>

int main(void)
{
    char buffer1[20] = "Hello, World!";
    char buffer2[20] = "1234567890";

    // Non-overlapping copy
    printf("Test 1: Non-overlapping\n");
    printf("Before: buffer2 = %s\n", buffer2);
    ft_memmove(buffer2, buffer1, 13); // copy including '\0'
    printf("After:  buffer2 = %s\n\n", buffer2);

    // Overlapping copy (dst < src)
    char overlap1[20] = "ABCDEFGHIJ";
    printf("Test 2: Overlapping dst < src\n");
    printf("Before: %s\n", overlap1);
    ft_memmove(overlap1, overlap1 + 2, 8);
    printf("After:  %s\n\n", overlap1);

    // Overlapping copy (dst > src)
    char overlap2[20] = "1234567890";
    printf("Test 3: Overlapping dst > src\n");
    printf("Before: %s\n", overlap2);
    ft_memmove(overlap2 + 2, overlap2, 8);
    printf("After:  %s\n\n", overlap2);

    // Edge case: n = 0
    char empty[10] = "Test";
    printf("Test 4: n = 0 (no change)\n");
    ft_memmove(empty, empty + 2, 0);
    printf("Result: %s\n", empty);

    return 0;
}
*/
