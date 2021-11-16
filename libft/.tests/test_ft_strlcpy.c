/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/05 10:16:47 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_strlen.c"
#include "../ft_strlcpy.c"

void	test_regular_fnc(char	*dest, char *src, unsigned int size)
{
	int len = strlcpy(dest, src, size);

	printf("%s", dest);
	printf("%c", '\n');
	printf("--len: %d", len);
	printf("%c", '\n');
}

void	test_ft_fnc(char	*dest, char *src, unsigned int size)
{
	int len = ft_strlcpy(dest, src, size);

	printf("%s", dest);
	printf("%c", '\n');
	printf("--len: %d", len);
	printf("%c", '\n');
}

int	main(void)
{
	char	src1[] = "";
	char	src2[] = "salut";
	char	dest1[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest2[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest3[] = "12";
	char	dest4[] = "12";

	printf("%s", "---- ft_strlcpy ----\n");

	test_regular_fnc(dest3, src1, 1);
	test_ft_fnc(dest4, src1, 1);

	test_regular_fnc(dest1, src2, 5);
	test_ft_fnc(dest2, src2, 5);

	test_regular_fnc(dest3, src2, 3);
	test_ft_fnc(dest4, src2, 3);



	return 0;
}