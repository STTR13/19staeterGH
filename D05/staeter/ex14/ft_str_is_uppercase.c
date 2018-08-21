/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:26:50 by staeter           #+#    #+#             */
/*   Updated: 2018/08/20 15:26:53 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		return (ft_str_is_uppercase(++str));
	else if (*str == 0)
		return (1);
	else
		return (0);
}
