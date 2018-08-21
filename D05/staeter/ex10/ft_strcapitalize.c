/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:34:43 by staeter           #+#    #+#             */
/*   Updated: 2018/08/21 11:13:52 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_charupcase(char *c)
{
	if (*c <= 'z' && *c >= 'a')
		*c += 'A' - 'a';
}

void	ft_charlowcase(char *c)
{
	if (*c <= 'Z' && *c >= 'A')
		*c += 'a' - 'A';
}

int		ft_isspace(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
	(c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize_recc(char *str)
{
	while (ft_isspace(*str))
	{
		if (*str != 0)
			str++;
		else
			return (str);
	}
	ft_charupcase(str);
	str++;
	while (!ft_isspace(*str))
	{
		ft_charlowcase(str);
		str++;
	}
	return (ft_strcapitalize_recc(str));
}

char	*ft_strcapitalize(char *str)
{
	ft_strcapitalize_recc(str);
	return (str);
}
