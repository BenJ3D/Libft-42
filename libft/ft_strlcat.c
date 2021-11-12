/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:35:43 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/11 22:48:13 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize == 0)
		return (ft_strlen(src));
	j = 0;
	while (dst[j])
	{
		j++;
	}
	i = 0;
	while (i < dstsize - 1 && src[i] && dstsize > 0)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = 0;
	return (ft_strlen(src));
}

// #include "libft.h"

// size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dsts)
// {
// 	unsigned int	src_len;
// 	unsigned int	dst_len;
// 	unsigned int	i;
// 	unsigned int	dist;

// 	src_len = ft_strlen(src);
// 	dst_len = ft_strlen(dst);
// 	i = 0;
// 	while (i < dsts && dst[i])
// 		i++;
// 	dist = i;
// 	if (dsts < dst_len || dsts == 0)
// 		return (src_len + dsts);
// 	if (dst_len < dsts)
// 	{
// 		i = 0;
// 		while ((i < dsts - dst_len - 1) && src[i])
// 		{
// 			dst[dst_len + i] = src[i];
// 			i++;
// 		}
// 	}
// 	if (i > 0)
// 		dst[dst_len + i] = '\0';
// 	return (src_len + dist);
// }
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char tab2 [] = "coucou les zouzous et ";
// 	char tab [] = "comment tu vas";

// 	int	len;
// 	len = 0;
// 	while (tab[len])
// 		len++;

// 	//printf("%s\n", tab);
// 	ft_strlcat(tab2, tab, len);  // verifier len et dstsize -1 ou non
// 	printf("%s\n", tab2);
// }
