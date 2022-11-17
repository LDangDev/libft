/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:57:15 by ldang             #+#    #+#             */
/*   Updated: 2022/11/17 15:00:45 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	n;

	n = strlen(str);
	str = str + (n - 1);
	if (c == 0)
		return ((char *)str + 1);
	while (*str && n--) // n-- de thoat loop (crash test)
	{
		if (*str == c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char str[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0"; 
   	char ch = '\0'; 
   	char *p;
   	p = ft_strrchr(str, ch);
   	printf("String starting from %c is: %s\n", ch, p);
	printf("String starting from %c is: %s\n", ch, strrchr(str, ch));
   	return 0;
}*/