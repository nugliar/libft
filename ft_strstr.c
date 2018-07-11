/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsharipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 23:19:17 by rsharipo          #+#    #+#             */
/*   Updated: 2018/05/22 12:02:42 by rsharipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		target;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!*to_find)
		return (str);
	while (to_find[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (str[j] == to_find[i])
				break ;
			else
				i = 0;
			++j;
		}
		target = j++;
		++i;
	}
	if (str[i] == '\0')
		return (0);
	else
		return (&str[target - ft_len(to_find) + 1]);
}
