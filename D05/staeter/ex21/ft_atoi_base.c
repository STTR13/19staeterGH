/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 09:42:00 by staeter           #+#    #+#             */
/*   Updated: 2018/08/21 11:17:24 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_valid_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	else
		return (i);
}

int		ifspace(char c)
{
	if (c == '\f' || c == '\r' || c == '\n' ||
	c == '\t' || c == '\v' || c == ' ')
		return (1);
	else
		return (0);
}

int		get_valid_digit(char c, char *base)
{
	int count;

	count = 0;
	if (c == '-' || c == '+' || ifspace(c))
		return (-2);
	while (*base)
	{
		if (c == *base)
			return (count);
		base++;
		count++;
	}
	return (-1);
}

int		take_number(char *str, char *base, unsigned int base_size)
{
	int i;
	int tmp;
	int acc;

	i = 0;
	acc = 0;
	while (str[i] != '\0')
	{
		tmp = get_valid_digit(str[i], base);
		if (tmp == -1)
			return (0);
		else if (tmp == -2)
			break ;
		else
			acc = (acc * base_size) + tmp;
		i++;
	}
	return (acc);
}

int		ft_atoi_base(char *str, char *base)
{
	int				i;
	int				neg;
	unsigned int	base_size;

	i = 0;
	neg = 1;
	base_size = get_valid_base(base);
	if (base_size)
	{
		if (str[i] == '-' || str[i] == '+')
		{
			neg = (str[i] == '-') ? -1 : 1;
			i++;
		}
		while (ifspace(str[i]))
			i++;
		neg *= take_number(&str[i], base, base_size);
	}
	return (neg);
}
