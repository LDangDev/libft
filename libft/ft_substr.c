/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:21:12 by ldang             #+#    #+#             */
/*   Updated: 2022/11/18 13:55:44 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	int		i;
	size_t	str_len;

	str_len = ft_strlen(s);
	i = 0;
	if (len > str_len)
		len = str_len;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sstr = (char *)malloc(sizeof(char) * len + 1);
	if (sstr == NULL)
		return (NULL);
	while (*s && len--)
	{
		sstr[i] = s[start + i];
		i++;
	}
	sstr[i] = '\0';
	return (sstr);
}

/*int	main(void)
{
	char	*s = "i just want this part #############";

	char *p = ft_substr(s, 5 ,20);

	printf("%s\n", p);
	return (0);
}*/
