/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:05:20 by staeter           #+#    #+#             */
/*   Updated: 2018/08/20 11:05:22 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	if (*s1 == *s2 && *s1 != 0)
		return (ft_strncmp(++s1, ++s2, --n));
	else if (*s1 == 0 && *s2 == 0)
		return (0);
	else
		return (*s1 - *s2);
}
