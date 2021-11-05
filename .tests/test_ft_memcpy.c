/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/05 15:30:28 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"
#include "../ft_memcpy.c"

void	test_regular_fncmv(char	*restrict dst, char *restrict src,	int n)
{
	int		i;

	memcpy(dst, src, n);

	i = 0;
	while (i < n)
	{
		printf("%d", dst[i]);
		i++;
	}
	printf("%c", '\n');
	i = 0;
	while (i < n)
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("%c", '\n');
}

void	test_ft_fncmv(char	*restrict dst, char *restrict src,	int n)
{
	int		i;

	ft_memcpy(dst, src, n);

	i = 0;
	while (i < n)
	{
		printf("%d", dst[i]);
		i++;
	}
	printf("%c", '\n');
	i = 0;
	while (i < n)
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("%c", '\n');
}


int	main(void)
{
	char	dest1mv[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest2mv[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	src1mv[] = "salut";
	char	src2mv[] = "salut";

	char	dest3mv[] = "AB";
	char	dest4mv[] = "AB";
	char	src3mv[] = "les amis";
	char	src4mv[] = "les amis";

	// char	dest5[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	// char	dest6[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";

	printf("%s", "---- ft_memcpy ----\n");

	test_regular_fncmv(dest1mv, src1mv, 5);
	test_ft_fncmv(dest2mv, src2mv, 5);

	test_regular_fncmv(dest3mv, src3mv, 3);
	test_ft_fncmv(dest4mv, src4mv, 3);

	// test_regular_fncmv(dest5+2, dest5+1, 10);
	// test_ft_fncmv(dest6+2, dest6+1, 10);

	return 0;
}