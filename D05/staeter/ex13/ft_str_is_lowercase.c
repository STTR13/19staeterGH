/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:25:03 by staeter           #+#    #+#             */
/*   Updated: 2018/08/20 15:25:05 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (ft_str_is_lowercase(++str));
	else if (*str == 0)
		return (1);
	else
		return (0);
}
