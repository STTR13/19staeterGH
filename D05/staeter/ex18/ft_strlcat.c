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

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*tmp;
	unsigned int	count;
	unsigned int	r;

	tmp = dest;
	count = 0;
	r = ((unsigned int)ft_strlen(dest) < size) ? ft_strlen(dest) + ft_strlen(src) : size + ft_strlen(src);
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
	*tmp = 0;
	return (r);
}
