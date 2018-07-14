/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsharipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:04:51 by rsharipo          #+#    #+#             */
/*   Updated: 2018/07/12 21:31:10 by rsharipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i] != 0)
			ft_putchar_fd(s[i++], fd);
		ft_putchar_fd('\n', fd);
	}
}
