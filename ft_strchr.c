/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:53:31 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/03 23:07:47 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(char *s, int c)
{
	char cc;
	cc = c;
	
	while(*s != cc)
		s++;

	return (s);
}
#include <stdio.h>
#include <string.h>
int	main()
{
	char tab2 [] = "Salut les gens";
	printf("%s\n", tab2);
	printf("%s", ft_strchr(tab2, 'g'));
}