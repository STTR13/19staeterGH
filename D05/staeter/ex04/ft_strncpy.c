/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 09:51:11 by staeter           #+#    #+#             */
/*   Updated: 2018/08/20 09:51:15 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *tmp;

	tmp = dest;
	while (*src != 0 && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (*dest != '\0')
	{
		*dest = '\0';
		dest++;
	}
	return (tmp);
}
