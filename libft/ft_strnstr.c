/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:37:41 by ldang             #+#    #+#             */
/*   Updated: 2022/11/09 14:22:59 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	n_len;
	int	h_len;

	n_len = ft_strlen(needle);
	h_len = ft_strlen(haystack);
	if (needle == 0)
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (n_len > h_len)
			return (NULL);
		if (!ft_strncmp(haystack, needle, n_len))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

/*int main()
{
    // Take any two strings
    char s1[] = "This is a joke";
    char s2[] = "is a";
    char* p;
  
    // Find first occurrence of s2 in s1
	p = ft_strnstr(s1, s2, 5);
  
    //Prints the result
    printf("%s\n", p);
	printf("%s\n", strnstr(s1, s2, 5));
    return 0;
}*/