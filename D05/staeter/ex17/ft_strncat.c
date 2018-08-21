/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:37:43 by staeter           #+#    #+#             */
/*   Updated: 2018/08/20 15:37:46 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, int nb)
{
	char *tmp;

	tmp = dest;
	while (*tmp != 0)
		tmp++;
	while (*src != 0 && nb > 0)
	{
		*tmp = *src;
		tmp++;
		src++;
		nb--;
	}
	*tmp = 0;
	return dest;
}


#include <stdio.h>
int main() {
	char str[] = "bfvusbl\0abcdef";
	printf("%s\n", ft_strncat(str, "123456789", 6));
	return 0;
}
