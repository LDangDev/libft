/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:13:07 by ldang             #+#    #+#             */
/*   Updated: 2022/11/09 14:25:54 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd(45, fd);
		ft_putchar_fd(50, fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd(45, fd);
		ft_putnbr_fd(-n, fd);
	}
	if (0 <= n && n < 10)
	{
		ft_putchar_fd(n + 48, fd);
	}
	if (n > 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
