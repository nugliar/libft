/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsharipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 11:13:18 by rsharipo          #+#    #+#             */
/*   Updated: 2018/07/14 11:19:32 by rsharipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpush(t_list *lst, void const *content, size_t content_size)
{
	t_list *tmp;

	if (!lst)
		return (NULL);
	if (!(tmp = ft_lstnew(content, content_size)))
		return (lst);
	tmp->next = lst;
	lst = tmp;
	return (lst);
}
