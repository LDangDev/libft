/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:34:24 by ldang             #+#    #+#             */
/*   Updated: 2022/11/18 12:14:57 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char *set)
{
	size_t	i;

	i = -1;
	while (set[++i])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		i;
	char		*new;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (check_set(s1[start], (char *)set))
		start++;
	while (check_set(s1[end - 1], (char *)set) && end > start) // bi fail vi ngu vl end am chay cmgn
		end--;
	new = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (new == NULL)
		return (NULL);
	while (end > start)
		new[i++] = s1[start++];
	new[i] = '\0';
	return (new);
}

/*int	main(void)
{
	char	*s = "  \t \t \n   \n\n\n\t";
	char 	*c = " \n\t";

	char *p = ft_strtrim(s, c);

	printf("%s\n", p);
	return (0);
}*/