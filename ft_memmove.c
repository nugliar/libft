/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsharipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:14:47 by rsharipo          #+#    #+#             */
/*   Updated: 2018/07/10 14:09:05 by rsharipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	void	*tmp;

	i = 0;
	tmp = malloc(len);
	while (i < len && ((unsigned char *)src)[i] != 0)
	{
		((unsigned char *)tmp)[i] = ((unsigned char *)src)[i];
		i++;
	}
	((unsigned char *)tmp)[i] = 0;
	i = 0;
	while (i < len && ((unsigned char *)dst)[i] != 0)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)tmp)[i];
		i++;
	}
	return (dst);
}
