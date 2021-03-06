/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:45:45 by staeter           #+#    #+#             */
/*   Updated: 2018/08/21 11:12:23 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != 0)
		return (ft_strcmp(++s1, ++s2));
	else if (*s1 == 0 && *s2 == 0)
		return (0);
	else
		return (*s1 - *s2);
}
