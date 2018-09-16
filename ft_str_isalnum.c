/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isalnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsharipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 10:38:22 by rsharipo          #+#    #+#             */
/*   Updated: 2018/09/10 10:38:33 by rsharipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_isalpha(const char *s)
{
	if (s == NULL)
		return (-1);
	while (*s)
		if (!ft_isalnum(*s++))
			return (0);
	return (1);
}