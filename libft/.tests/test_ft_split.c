/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:30:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/12 15:38:43 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_strlcpy.c"
#include "../ft_strlen.c"
#include "../ft_calloc.c"
#include "../ft_memset.c"
#include "../ft_split.c"

void	show_pnt_data(char **pnt)
{
	int	i;

	i = 0;
	while (pnt[i])
	{
	    printf("%s\n", pnt[i]);
		i++;
	}
	printf("%s\n", pnt[i]);
}

int	main(void)
{
	char	s1[] = "..Bonjour..les...amis..";
	char	s2[] = "     ";
    char	s3[] = " Tripouille ";
	char	s4[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char	c1 = '.';
	char	c2 = ' ';
	char 	**ouput;

	printf("%s", "---- ft_split ----\n");

	ouput = ft_split(s1, c1);
	show_pnt_data(ouput);
	ouput = ft_split(s2, c2);
	show_pnt_data(ouput);
	ouput = ft_split(s3, c2);
	show_pnt_data(ouput);
	ouput = ft_split(s4, c2);
	show_pnt_data(ouput);
	return (0);
}