/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/02 16:47:36 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_isascii.c"

void	test_regular_fnc(char	*string)
{
	int		i;

	i = 0;
	while (string[i])
	{
		i++;
		printf("%i", isascii(string[i]));
	}
	printf("%c", '\n');
}

void	test_ft_fnc(char	*string)
{
	int		i;

	i = 0;
	while (string[i])
	{
		i++;
		printf("%i", ft_isascii(string[i]));
	}
	printf("%c", '\n');
}

int	main(void)
{
	char	string1[] = "0123456789";
	char	string2[] = "A8BCDEF3IJKLMNOPQRSTU\200WYZabcdefgh9ijk*&lmnˆpkr st+vwxyz";
	char	string3[] = "\127\1125feq\00p0`e@[{}sqg\201";
	char	string4[] = "00\000ef/*qeq:|+-2";
	char	string5[] = "ef/*qeq:|+-2";
	char	string6[] = "fff8910\200\001\177\178\201\084\001fff0\0";

	printf("%s", "---- ft_isascii ----\n");

	test_regular_fnc(string1);
	test_ft_fnc(string1);

	test_regular_fnc(string2);
	test_ft_fnc(string2);

	test_regular_fnc(string3);
	test_ft_fnc(string3);

	test_regular_fnc(string4);
	test_ft_fnc(string4);

	test_regular_fnc(string5);
	test_ft_fnc(string5);

	test_regular_fnc(string6);
	test_ft_fnc(string6);

	return 0;
}