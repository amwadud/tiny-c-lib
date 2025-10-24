/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:20:38 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/25 00:10:19 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

# define FT_INT_MIN     (-2147483647 - 1)
# define FT_INT_MIN_STR "-2147483648"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == FT_INT_MIN)
	{
		ft_putstr_fd(FT_INT_MIN_STR, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

/*
int main(void)
{
    int test_numbers[] = {0, 42, -42, 2147483647, -2147483648};
    size_t i;

    for (i = 0; i < sizeof(test_numbers)/sizeof(test_numbers[0]); i++)
    {
        ft_putnbr_fd(test_numbers[i], 1);  // 1 = stdout
        ft_putchar_fd('\n', 1);            // print newline
    }
    return 0;
}
*/
