/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/03 12:41:24 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_strncmp.c"

void	test_regular_fnc(char	*string1, char	*string2, int size)
{
	printf("%d", strncmp(string1, string2, size));
	printf("%c", '\n');
}

void	test_ft_fnc(char	*string1, char	*string2, int size)
{
	printf("%d", ft_strncmp(string1, string2, size));
	printf("%c", '\n');
}

int	main(void)
{
	char	string1[] = "01234567890";
	char	string2[] = "01234567895";
	char	string3[] = "Salut Bob !";
	char	string4[] = "Youlo Bob !";
	char	string5[] = "";
	char	string6[] = "Pifpaf";

	printf("%s", "---- ft_strncmp ----\n");

	test_regular_fnc(string1, string2, 10);
	test_ft_fnc(string1, string2, 10);

	test_regular_fnc(string1, string2, 11);
	test_ft_fnc(string1, string2, 11);

	test_regular_fnc(string3, string4, 10);
	test_ft_fnc(string3, string4, 10);

	test_regular_fnc(string5, string6, 10);
	test_ft_fnc(string5, string6, 10);

	test_regular_fnc(string5, string5, 10);
	test_ft_fnc(string5, string5, 10);

	return 0;
}