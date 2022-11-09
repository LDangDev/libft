/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:37:03 by ldang             #+#    #+#             */
/*   Updated: 2022/11/09 15:10:44 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}	
	return (len);
}

char	*ft_itoa(int n)
{
	char	*tmp;
	int		index;

	index = ft_numlen(n);
	tmp = (char *)malloc(sizeof(char) * index + 1);
	if (tmp == NULL)
		return (NULL);
	if (n < 0)
	{
		ft_putchar_fd(45, 1);
		n = -n;
	}
	while (index > 0)
	{
		tmp[index - 1] = n % 10 + 48;
		n = n / 10;
		index--;
	}
	tmp[index] = 0;
	return (tmp);
}

/*int	main(void)
{
	int n = -2147483647;

	printf("%s\n", ft_itoa(n));
	return 0;
}*/