/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:38:30 by staeter           #+#    #+#             */
/*   Updated: 2018/08/21 11:15:29 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while (*tmp != 0)
		tmp++;
	while (*src != 0)
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = 0;
	return (dest);
}
