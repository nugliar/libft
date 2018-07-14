/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsharipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 10:58:25 by rsharipo          #+#    #+#             */
/*   Updated: 2018/07/14 11:21:17 by rsharipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_lstpop(t_list **lst)
{
	t_list	*tmp;
	void	*ret;

	if (lst && *lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ret = tmp->content;
		free(tmp);
		return (ret);
	}
	return (NULL);
}
