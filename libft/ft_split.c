/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:33:17 by ldang             #+#    #+#             */
/*   Updated: 2022/11/11 15:04:30 by ldang            ###   ########.fr       */
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

int	count_word(char const *s, char c)
{
	int	num_word;

	num_word = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		num_word++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (num_word);
}

char	*print_word(char const *s, char c)
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

void	fill_words(char **substr, char const *str, char c)
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

	num_words = count_word(s, c);
	if (s == '\0' && c == '\0')
		return (NULL);
	substr = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!substr)
		return (NULL);
	substr[num_words] = 0;
	fill_words(substr, s, c);
	return (substr);
}

/*int main()
{
	char str[] = "\0aa\0bb";
	
	char delim = '\0';
	char **res = ft_split(str, delim);
	int		n;

	n = count_word(str, delim);
	printf("%d\n", n);
	while (*res)
	{
		printf("%s\n", *res++);
	}
	return 0;
}*/