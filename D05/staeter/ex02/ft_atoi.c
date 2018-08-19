/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 06:10:16 by staeter           #+#    #+#             */
/*   Updated: 2018/08/15 06:10:22 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' ||
	c == '\n' || c == '\r' || c == '\f')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int acc;
	int neg;
	int num_start_bool;

	i = -1;
	acc = 0;
	neg = 1;
	num_start_bool = 0;
	while (str[++i] != 0)
	{
		if ((str[i] == '-' || str[i] == '+') && !num_start_bool)
		{
			neg = (str[i] == '-') ? -1 : 1;
			num_start_bool = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			acc = (acc * 10) + (str[i] - 48);
			num_start_bool = 1;
		}
		else if (!ft_isspace(str[i]) || num_start_bool)
			break ;
	}
	return (acc * neg);
}
