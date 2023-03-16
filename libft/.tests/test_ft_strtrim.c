/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:30:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/09 16:59:14 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_strlen.c"
#include "../ft_calloc.c"
#include "../ft_strlcpy.c"
#include "../ft_strtrim.c"


int	main(void)
{
	char	s1[] = ".*.***   .   *Bonjour les amis..******....";
	char	s2[] = "  \t \t \n   \n\n\n\t";
	char	s3[] = ".*.***..******....";
	char	s4[] = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char	c1[] = ".* ";
	char	c2[] = "\n\t ";
	char 	*st1;
	char 	*st2;
	char 	*st3;
	char 	*st4;

	printf("%s", "---- ft_strtrim ----\n");

	st1 = ft_strtrim(s1, c1);
	printf("%s\n", st1);

	st2 = ft_strtrim(s2, c2);
	printf("%s", st2);

	st3 = ft_strtrim(s3, c1);
	printf("%s", st3);

	st4 = ft_strtrim(s4, c2);
	printf("%s", st4);

	return (0);
}