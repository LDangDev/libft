/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:20:05 by ldang             #+#    #+#             */
/*   Updated: 2022/11/30 15:09:58 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t	dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	i = 0;
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
