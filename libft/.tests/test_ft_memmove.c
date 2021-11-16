/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/04 16:59:37 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_memcpy.c"
#include "../ft_memmove.c"

void	test_regular_fnc(char	*restrict dst, char *restrict src,	int n)
{
	int		i;
	void	*pnt;

	pnt = memmove(dst, src, n);

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
	printf("%pt", pnt);
	printf("%c", '\n');
	printf("%s", (char *)pnt);
	printf("%c", '\n');
	printf("%c", '\n');
}

void	test_ft_fnc(char	*restrict dst, char *restrict src,	int n)
{
	int		i;
	void	*pnt;

	pnt = ft_memmove(dst, src, n);

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
	printf("%pt", pnt);
	printf("%c", '\n');
	printf("%s", (char *)pnt);
	printf("%c", '\n');
	printf("%c", '\n');
}

int	main(void)
{
	char	src1[] = "salut";
	char	src2[] = "salut";

	char	dest1[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest2[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest4[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest5[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest6[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest7[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	printf("%s", "---- ft_memmove ----\n");

	test_regular_fnc(dest1, src1, 4);
	test_ft_fnc(dest2, src2, 4);

	test_regular_fnc(dest4+2, dest4+20, 10);
	test_ft_fnc(dest5+2, dest5+20, 10);

	test_regular_fnc(dest6+20, dest6+2, 10);
	test_ft_fnc(dest7+20, dest7+2, 10);

	return 0;
}