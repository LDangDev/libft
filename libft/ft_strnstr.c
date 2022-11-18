/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:37:41 by ldang             #+#    #+#             */
/*   Updated: 2022/11/18 14:45:45 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] == haystack[i + j] && (i + j) < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
		}
		if (needle[j + 1] == '\0' && needle[j] != haystack[i + j])
			return (NULL);
		i++;
	}
	return (NULL);
}

/*int main()
{
    // Take any two strings
    char *s1 = "see FF your FF return FF now FF";
    char *s2 = "FF";
    char* p;
  
    // Find first occurrence of s2 in s1
	p = ft_strnstr(s1, s2, 9);
  
    //Prints the result
    printf("%s\n", p);
	printf("%s\n", strnstr(s1, s2, 9));
    return 0;
}*/