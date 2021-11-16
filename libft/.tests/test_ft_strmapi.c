/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/10 12:39:46 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "./../ft_strlen.c"
#include "./../ft_calloc.c"
#include "./../ft_strdup.c"
#include "./../ft_strmapi.c"

char	pntf(unsigned int l, char c)
{
	(void)l;
	return (c + 1);
}

int	main(void)
{
	char	s1[] = "Bonjour à tous !";
	char	*s2;

	printf("%s", "---- ft_strmapi ----\n");

	s2 = ft_strmapi(s1, &pntf);
	printf("%s", s2);

	return (0);
}