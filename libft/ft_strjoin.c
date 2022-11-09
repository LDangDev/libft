/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:14:04 by ldang             #+#    #+#             */
/*   Updated: 2022/11/09 14:15:03 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	int		n;
	int		m;

	n = ft_strlen(s1);
	m = ft_strlen(s2);
	nstr = (char *)malloc(sizeof(char) * (n + m) + 1);
	if (!nstr)
		return (NULL);
	while (*s1)
		*nstr++ = *s1++;
	while (*s2)
		*nstr++ = *s2++;
	*nstr = '\0';
	return (nstr - (n + m));
}

/*int	main(void)
{
	char	*s = "fdfdfdf";
	char	*c = "";

	char *p = ft_strjoin(s, c);

	printf("%s\n", p);
	printf("%zu\n", ft_strlen(p));
	return (0);
}*/