/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:21:12 by ldang             #+#    #+#             */
/*   Updated: 2022/11/09 14:11:48 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	int		i;

	i = 0;
	sstr = (char *)malloc(sizeof(char) * len + 1);
	if (sstr == NULL)
		return (NULL);
	else
	{
		while (*s && len--)
			*sstr++ = s[start + i++ - 1];
		sstr[i] = '\0';
		return (sstr - i);
	}
}

/*int	main(void)
{
	char	*s = "this is a joke";

	char *p = ft_substr(s, 5 ,10);

	printf("%s\n", p);
	printf("%lu\n", strlen(p));
	return (0);
}*/
