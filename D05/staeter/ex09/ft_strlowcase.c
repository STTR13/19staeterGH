/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:29:38 by staeter           #+#    #+#             */
/*   Updated: 2018/08/20 11:29:41 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase_recc(char *str)
{
	if (*str == 0)
		return str;
	else if (*str <= 'Z' && *str >= 'A')
		*str += 'a' - 'A';
	return ft_strlowcase_recc(++str);

}

char *ft_strlowcase(char *str)
{
	ft_strlowcase_recc(str);
	return str;
}
