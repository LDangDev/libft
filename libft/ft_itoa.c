/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:37:03 by ldang             #+#    #+#             */
/*   Updated: 2022/11/28 12:28:09 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	else if (nb == 0)
		len = 1;
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
	long	nb;
	int		i;

	nb = n;
	i = 0;
	index = ft_numlen(nb);
	tmp = (char *)malloc(sizeof(char) * index + 1);
	if (!tmp)
		return (NULL);
	tmp[index] = '\0';
	if (nb < 0)
	{
		tmp[0] = '-';
		nb = -nb;
		i++;
	}
	while (index > i)
	{
		tmp[index - 1] = nb % 10 + 48;
		nb = nb / 10;
		index--;
	}
	return (tmp);
}
