/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsharipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 21:30:01 by rsharipo          #+#    #+#             */
/*   Updated: 2018/07/12 21:52:19 by rsharipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned int	x;

	x = (unsigned int)c;
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}
