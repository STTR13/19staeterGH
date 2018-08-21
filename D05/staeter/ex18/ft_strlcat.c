/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 08:11:34 by staeter           #+#    #+#             */
/*   Updated: 2018/08/21 11:16:02 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*tmp;
	unsigned int	count;

	tmp = dest;
	count = 0;
	while (*tmp != 0)
	{
		tmp++;
		count++;
	}
	while (*src != 0 && count < size - 1)
	{
		*tmp = *src;
		tmp++;
		src++;
		count++;
	}
	if (count == size)
		*tmp = 0;
	else
		*tmp = *src;
	return (count);
}
