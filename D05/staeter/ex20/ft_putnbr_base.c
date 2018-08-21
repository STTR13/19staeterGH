/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 08:56:45 by staeter           #+#    #+#             */
/*   Updated: 2018/08/21 11:16:45 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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

void	ft_putdigit_base(unsigned int digit, char *base)
{
	ft_putchar(base[digit]);
}

void	ft_putnbr_base_recc(unsigned int nbr, char *base, int base_size)
{
	unsigned int digit;

	if (nbr > 0)
	{
		digit = nbr % base_size;
		ft_putnbr_base_recc(nbr / base_size, base, base_size);
		ft_putdigit_base(digit, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				b;
	unsigned int	abs_nbr;

	b = get_valid_base(base);
	if (b)
	{
		if (nbr < 0)
			ft_putchar('-');
		abs_nbr = (nbr >= 0 ? nbr : -nbr);
		if (nbr == 0)
			ft_putdigit_base(0, base);
		ft_putnbr_base_recc(abs_nbr, base, b);
	}
}
