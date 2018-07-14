/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsharipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 09:33:08 by rsharipo          #+#    #+#             */
/*   Updated: 2018/07/13 09:33:37 by rsharipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_blank(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int					i;
	unsigned long long	nb;
	int					neg;
	unsigned long long	max;

	max = 9223372036854775807;
	i = 0;
	nb = 0;
	while (is_blank(str[i]))
		i++;
	neg = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != 0)
	{
		nb = nb * 10;
		nb = nb + str[i++] - 48;
	}
	if ((nb > max && neg > 0) || (nb > max + 1 && neg < 0))
		return ((neg > 0) ? -1 : 0);
	return ((int)(neg * nb));
}
