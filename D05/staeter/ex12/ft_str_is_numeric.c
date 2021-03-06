/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:26:23 by staeter           #+#    #+#             */
/*   Updated: 2018/08/21 11:14:27 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (ft_str_is_numeric(++str));
	else if (*str == 0)
		return (1);
	else
		return (0);
}
