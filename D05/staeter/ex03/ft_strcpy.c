/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 06:30:06 by staeter           #+#    #+#             */
/*   Updated: 2018/08/15 06:30:15 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	if (*dest != 0 && *src != 0)
	{
		*dest = *src;
		return (ft_strcpy(++dest, ++src));
	}
	else
	{
		*dest = 0;
		return dest;
	}
}

int main() {
	char *str = "Bonjour!";
	char dest[8] = "Hello! r";

	printf("%s\n", ft_strcpy(dest, str));
	return 0;
}
