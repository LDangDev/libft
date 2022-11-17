/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:37:41 by ldang             #+#    #+#             */
/*   Updated: 2022/11/17 17:24:01 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	if (*needle == 0)
		return ((char *)haystack);
	else if (haystack == NULL && len == 0)
		return (NULL);
	n_len = strlen(needle);
	if (n_len > len)
		return (NULL);
	while (*haystack && len--)
	{
		if (*haystack == *needle)
		{
			if (!strncmp(haystack, needle, n_len))
				return ((char *)haystack);
		}
		haystack++;	
	}
	return (NULL);
}

/*int main()
{
    // Take any two strings
    char s1[] = "MZIRIBMZIRIBMZE123";
    char s2[] = "MZIRIBMZE";
    char* p;
  
    // Find first occurrence of s2 in s1
	p = ft_strnstr(s1, s2, 9);
  
    //Prints the result
    printf("%s\n", p);
	printf("%s\n", strnstr(s1, s2, 9));
    return 0;
}*/ 