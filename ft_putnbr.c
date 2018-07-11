/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsharipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 20:49:15 by rsharipo          #+#    #+#             */
/*   Updated: 2018/06/03 20:49:18 by rsharipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	ft_alg(int nb)
{
	int nb_copy;
	int mult;

	mult = 1;
	nb_copy = nb;
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
		return ;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		mult = mult * 10;
	}
	nb = nb_copy;
	while (mult)
	{
		nb = nb / mult;
		ft_putchar(nb + '0');
		nb = nb_copy % mult;
		mult = mult / 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	ft_alg(nb);
}
