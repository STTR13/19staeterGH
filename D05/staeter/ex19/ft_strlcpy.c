/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 08:33:53 by staeter           #+#    #+#             */
/*   Updated: 2018/08/21 11:16:20 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*tmp;
	unsigned int	count;

	count = 0;
	tmp = src;
	while (*src != 0 && count < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = 0;
	return (ft_strlen(tmp));
}
