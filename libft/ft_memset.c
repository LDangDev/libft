/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:48:03 by ldang             #+#    #+#             */
/*   Updated: 2022/11/09 14:02:44 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*s, int c, size_t len)
{
	unsigned char	*a;

	a = s;
	while (len--)
		*a++ = c;
	return (s);
}

/*int main(void)
{
	int s[5] = {0,1,2,3,4};

	printf("%s\n",ft_memset(s, 50 ,5));
	return 0;
}*/
