/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldang <ldang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:58:46 by ldang             #+#    #+#             */
/*   Updated: 2022/11/09 14:19:03 by ldang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (ft_isalpha(a) != 0 || ft_isdigit(a) != 0)
		return (1);
	return (0);
}

/*int main(void)
{
    char    c = '2';
    printf("%d\n", ft_isalnum(c));
    return 0;
}*/