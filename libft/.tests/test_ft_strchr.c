/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/03 11:38:45 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_strchr.c"

void	test_regular_fnc(char	*string, char	c)
{
	printf("%s", strchr(string, c));
	printf("%c", '\n');
}

void	test_ft_fnc(char	*string, char	c)
{
	printf("%s", ft_strchr(string, c));
	printf("%c", '\n');
}

int	main(void)
{
	char	string1[] = "0123456789";
	char	string2[] = "A8BCDEF3IJKLMNOPQRSTU\200WYZabcdefgh9ijk*&lmnˆpkr st+vwxyz";
	char	string3[] = "\127\1125feq\00p0`e@[{}sqg\201";
	char	string4[] = "00\000ef/*qeq:|+-2";
	char	string5[] = "ef/*qeq:|+-2";
	char	string6[] = "\001\040\200\176\177\300\050fzlk1080735cf,..,zqewr!";
	char	string7[] = "alkqel\0alkqwi";

	printf("%s", "---- ft_strchr ----\n");

	test_regular_fnc(string1, '6');
	test_ft_fnc(string1, '6');

	test_regular_fnc(string1, 'x');
	test_ft_fnc(string1, 'x');

	test_regular_fnc(string2, '\200');
	test_ft_fnc(string2, '\200');

	test_regular_fnc(string3, '\112');
	test_ft_fnc(string3, '\112');

	test_regular_fnc(string4, '0');
	test_ft_fnc(string4, '0');

	test_regular_fnc(string5, '|');
	test_ft_fnc(string5, '|');

	test_regular_fnc(string6, 0);
	test_ft_fnc(string6, 0);

	test_regular_fnc(string7, '\0');
	test_ft_fnc(string7, '\0');

	return 0;
}