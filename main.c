/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsharipo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:49:23 by rsharipo          #+#    #+#             */
/*   Updated: 2018/07/10 17:49:43 by rsharipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

//memset
/*int	main(void)
{
	char	str[20] = "delicious apple";

	ft_memset(str, 'n', 6 * sizeof(char));
	printf("%s\n", str);
	return (0);
}*/

//bzero
/*int	main(void)
{
	char	str[20] = "delicious apple";

	ft_bzero(str + 3, 0 * sizeof(char));
	printf("%s\n", str);
	ft_bzero(str + 3, 6 * sizeof(char));
	printf("%s\n", str);
	return (0);
}*/

//memcpy
/*int	main(void)
{
	const char	src[20] = "delicious apple";
	char		dst[20] = "terrible orange";

	ft_memcpy(dst, src, 10 * sizeof(char));
	printf("%s\n", dst);
	return (0);
}*/

//memccpy
/*int	main(void)
{
	const char	src[20] = "delicious apple";
	char		dst[20] = "terrible orange";
	char		*str;

	str = (char *)ft_memccpy(dst, src, 'u', 12 * sizeof(char));
	printf("%s\n", str);
	return (0);
}*/

//memmove
/*int	main(void)
{
	//const char	src[20] = "delicious apple";
	char		dst[20] = "terrible orange";

	printf("%lu\n", sizeof(dst));
	ft_memmove(dst + 3, dst, sizeof(dst));
	printf("%s\n", dst);
	return (0);
}*/

//memchr
/*int	main(void)
{
	//const char	src[20] = "delicious apple";
	char		dst[20] = "terrible orange";

	printf("%s\n", (char *)ft_memchr(dst, 'g', sizeof(dst)));
	return (0);
}*/

//memcmp
/*int	main(void)
{
	char	s1[20] = "terrible apple";
	char	s2[20] = "terrible orange";

	printf("%d\n", ft_memcmp(s1, s2, 20));
	return (0);
}*/

//strlen
/*int	main(void)
{
	char	s[20] = "worst pineapple";

	printf("%zu\n", ft_strlen(s));
	return (0);
}*/

//strdup
/*int	main(void)
{
	char	s[20] = "worst pineapple";

	printf("%s\n", ft_strdup(s));
	return (0);
}*/

//strcpy
/*int	main(void)
{
	char	src[20] = "worst pineapple";
	char	dst[10] = "MMMMMMMM";

	printf("%s\n", ft_strcpy(dst, src));
	return (0);
}*/

//strncpy
/*int	main(void)
{
	char	dst[1] = "";
	char	src[9] = "MMMMMMMM";

	printf("%s\n", ft_strncpy(dst, src, 9));
	return (0);
}*/

//strcat
/*int	main(void)
{
	char	dst[20] = "pineapple";
	char	src[9] = "MMMMMMM";

	printf("%s\n", ft_strcat(dst, src));
	return (0);
}*/

//strncat
/*int	main(void)
{
	char	dst[20] = "pineapple";
	char	src[9] = "MMMMMMM";

	printf("%s\n", ft_strncat(dst, src, 3));
	return (0);
}*/

//strlcat
int	main(void)
{
	char	dst[20] = "pineapple";
	char	src[9] = "MMMMMMM";

	printf("%zu\n", ft_strlcat(dst, src, 20));
	return (0);
}
