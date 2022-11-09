/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:26:36 by ldang             #+#    #+#             */
/*   Updated: 2022/11/09 14:12:12 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int main () {
   char str1[50] = "This is a joke" ;
   char str2[50] = "today is not a good day";
   int ret;

   ret = ft_strncmp(str1, str2, 6);

   printf("%i\n", strncmp(str1, str2, 6));
   printf("%i\n", ret);

   return(0);
}*/