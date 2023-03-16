/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/10 12:52:30 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "./../ft_strlen.c"
#include "./../ft_calloc.c"
#include "./../ft_strdup.c"
#include "./../ft_striteri.c"

void	pntf(unsigned int l, char *s)
{
	(void)l;
	s[0]++;
}

int	main(void)
{
	char	s1[] = "Bonjour à tous !";

	printf("%s", "---- ft_striteri ----\n");

	ft_striteri(s1, &pntf);
	printf("%s", s1);

	return (0);
}