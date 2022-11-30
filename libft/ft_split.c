/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:33:17 by ldang             #+#    #+#             */
/*   Updated: 2022/11/30 15:00:57 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static int	count_word(char const *s, char c)
{
	int	num_word;
	int	i;

	i = 0;
	num_word = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			if (s[i] == c && s[i + 1] == '\0')
				num_word = -1;
			i++;
		}
		num_word++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (num_word);
}

static char	*print_word(char const *s, char c)
{
	int		len;
	int		i;
	char	*word;

	i = 0;
	len = word_len(s, c);
	word = (char *)malloc(sizeof(char) * len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	fill_words(char **substr, char const *str, char c)
{
	int	index;

	index = 0;
	while (*str && *str == c)
		str++;
	while (*str)
	{
		substr[index] = print_word(str, c);
		index++;
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**substr;

	if (s == '\0' && c == '\0')
		return (NULL);
	num_words = count_word(s, c);
	substr = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!substr)
		return (NULL);
	substr[num_words] = 0;
	fill_words(substr, s, c);
	return (substr);
}
