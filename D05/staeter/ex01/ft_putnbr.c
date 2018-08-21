/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 20:02:11 by staeter           #+#    #+#             */
/*   Updated: 2018/08/11 20:02:48 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb = 214748364;
			ft_putnbr(nb);
			ft_putchar('8');
		}
		else
		{
			nb = -1 * nb;
			ft_putnbr(nb);
		}
	}
	else if (nb / 10 > 0)
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
	else
		ft_putchar('0' + (nb % 10));
}

int main() {
	ft_putnbr(123);
	ft_putnbr(0);
	ft_putnbr(-7894553);
	ft_putnbr(-1);
	ft_putnbr(45000);
	return 0;
}
