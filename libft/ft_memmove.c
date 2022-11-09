/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:26:18 by ldang             #+#    #+#             */
/*   Updated: 2022/11/09 16:27:19 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *des, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	int			i;

	i = 0;
	if (des == src || len == 0)
		return (des);
	d = (char *) des;
	s = (const char *)src;
	if (d <= s)
		ft_memcpy(des, src, len);
	else
	{
		while (len--)
			*(d + len) = *(s + len);
	}
	return (des);
}

/*int main(void)
{
char src[50] = "this is a good but no bad";
char des[20] = "THIS IS A GOOD";
ft_memmove(src + 5, src, 5);
printf("%s\n", ft_memmove(des, src, 5));
printf("%s\n", memmove(des, src, 5));
return 0;
}*/