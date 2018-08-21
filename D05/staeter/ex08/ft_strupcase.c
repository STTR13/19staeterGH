/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:13:19 by staeter           #+#    #+#             */
/*   Updated: 2018/08/20 11:13:23 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase_recc(char *str)
{
	if (*str == 0)
		return str;
	else if (*str <= 'z' && *str >= 'a')
		*str += 'A' - 'a';
	return ft_strupcase_recc(++str);

}

char *ft_strupcase(char *str)
{
	ft_strupcase_recc(str);
	return str;
}
