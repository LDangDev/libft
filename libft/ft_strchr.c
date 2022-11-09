/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:57:08 by ldang             #+#    #+#             */
/*   Updated: 2022/11/09 16:56:47 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char) c)
			return ((char *)str);
		str++;
	}
	if (c == 0)
		return ((char *)str);
	return (NULL);
}

/*int	main(void)
{
	const char str[] = "This is just a String"; 
   	char ch = 'i'; 
   	char *p;
   	p = ft_strchr(str, ch);

   	printf("String starting from %c is: %s\n", ch, p);
	printf("String starting from %c is: %s\n", ch, strrchr(str, ch));
   	return 0;
}*/