/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:25:59 by ldang             #+#    #+#             */
/*   Updated: 2022/11/09 13:58:20 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
			return (*str1 - *str2);
	}
	return (0);
}

/*int main () {
   char str1[50] = "This is a joke" ;
   char str2[50] = "today is not a good day";
   int ret;

   ret = strncmp(str1, str2, 6);

   printf("%i\n", ft_memcmp(str1, str2, 6));
   printf("%i\n", ret);

   return(0);
}*/
