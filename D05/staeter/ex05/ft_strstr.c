/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:05:51 by staeter           #+#    #+#             */
/*   Updated: 2018/08/21 11:12:08 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strstart(char *str, char *to_find)
{
	if (*str == *to_find && *to_find != 0)
		return (ft_strstart(++str, ++to_find));
	else if (*to_find == 0)
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	else if (*str == '\0')
		return (0);
	else if (ft_strstart(str, to_find))
		return (str);
	else
		return (ft_strstr(++str, to_find));
}
