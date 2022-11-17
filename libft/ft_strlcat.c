/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:20:05 by ldang             #+#    #+#             */
/*   Updated: 2022/11/17 15:45:44 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t	dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (0);
	dlen = ft_strlen(dst);
	if (dstsize <= dlen)
		return (dstsize + ft_strlen(src));
	else
	{
		while (src[i] != '\0' && i < dstsize - dlen - 1)
		{
			dst[i + dlen] = src[i];
			i++;
		}
		dst[i + dlen] = '\0';
		return (slen + dlen);
	}
}

/*void test(int size)
{
    char string[50] = "dbc123";
    char buffer[50] = "a12";
    int r;

    r = ft_strlcat(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test(40);
    test(10);
    test(1);
    test(0);
	test(2);
	test(5);

    return(0);
}*/