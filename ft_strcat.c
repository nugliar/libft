/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsharipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:59:37 by rsharipo          #+#    #+#             */
/*   Updated: 2018/09/03 10:35:17 by rsharipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int j;

	if (!s1 || !s2)
		return (s1);
	i = 0;
	while (s1[i] != 0)
		i++;
	j = 0;
	while (s2[j] != 0)
		s1[i++] = s2[j++];
	s1[i] = 0;
	return (s1);
}
