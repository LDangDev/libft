/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:57:15 by ldang             #+#    #+#             */
/*   Updated: 2022/11/09 14:07:07 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	n;

	n = ft_strlen(str);
	str = &str[n - 1];
	while (*str--)
	{
		if (*str == c)
			return ((char *)str);
		else if (c == 0)
			return (NULL);
	}
	return (NULL);
}

/*int	main(void)
{
	const char str[] = "This is just a String"; 
   	char ch = 'n'; 
   	char *p;
   	p = ft_strrchr(str, ch);
   	printf("String starting from %c is: %s\n", ch, p);
	printf("String starting from %c is: %s\n", ch, strrchr(str, ch));
   	return 0;
}*/