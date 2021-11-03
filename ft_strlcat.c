/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:35:43 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/03 22:38:23 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size) // passer en size_t
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (dest[j])
	{
		j++;
	}
	i = 0;
	while (i < size && src[i] && size > 0)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (j);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char tab2 [] = "coucou les zouzous et ";
	char tab [] = "comment tu vas";

	int	len;
	len = 0;
	while (tab[len])
		len++;

	//printf("%s\n", tab);
	ft_strlcat(tab2, tab, len);  // verifier len et size -1 ou non
	printf("%s\n", tab2);
}
