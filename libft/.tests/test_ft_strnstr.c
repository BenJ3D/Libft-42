/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/04 10:59:14 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"
#include "../ft_strlen.c"
#include "../ft_strnstr.c"

void	test_regular_fnc(char	*haystack, char	*needle, int n)
{
	printf("%s", strnstr(haystack, needle, n));
	printf("%c", '\n');
}

void	test_ft_fnc(char	*haystack, char	*needle, int n)
{
	printf("%s", ft_strnstr(haystack, needle, n));
	printf("%c", '\n');
}

int	main(void)
{
	char haystack1[] = "I want to go to nord-corea, corea is the futur";
	char haystack2[] = "Tout là-bas, au fin fond des tréfonds inexplorés et mal famés du bout du bras occidental de la Galaxie, traîne un petit soleil jaunâtre et minable.";
	char needle1[] = "";
	char needle2[] = "corea";
	char needle3[] = "going";
	char needle4[] = "et";
	char needle5[1];
	needle5[0] = '\0';

	printf("%s", "---- ft_strnstr ----\n");

	test_regular_fnc(haystack1, needle1, 46);
	test_ft_fnc(haystack1, needle1, 46);

	test_regular_fnc(haystack1, needle2, 46);
	test_ft_fnc(haystack1, needle2, 46);

	test_regular_fnc(haystack1, needle2, 10);
	test_ft_fnc(haystack1, needle2, 10);

	test_regular_fnc(haystack1, needle2, 500);
	test_ft_fnc(haystack1, needle2, 500);

	test_regular_fnc(haystack1, needle5, 46);
	test_ft_fnc(haystack1, needle5, 46);

	test_regular_fnc(haystack1, needle3, 46);
	test_ft_fnc(haystack1, needle3, 46);

	test_regular_fnc(haystack2, needle4, 147);
	test_ft_fnc(haystack2, needle4, 147);

	test_regular_fnc(haystack2, needle5, 147);
	test_ft_fnc(haystack2, needle5, 147);

	return 0;
}