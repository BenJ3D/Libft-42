/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/04 11:52:49 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "../ft_atoi.c"

void	test_regular_fnc(char	*string)
{
	printf("%d", atoi(string));
	printf("%c", '\n');
}

void	test_ft_fnc(char	*string)
{
	printf("%d", ft_atoi(string));
	printf("%c", '\n');
}

int	main(void)
{
	char	string1[] = "167881";
	char	string2[] = "610449";
	char	string3[] = "0";
	char	string4[] = "\200";
	char	string5[] = "-0";
	char	string6[] = "-69754";
	char	string7[] = "-98001";
	char	string8[] = "-0287";
	char	string9[] = " -0987";
	char	string10[] = " -542";
	char	string11[] = " - 297";
	char	string12[] = "   -15";
	char	string13[] = "   14";
	char	string14[] = "   98";
	char	string15[] = "--298";
	char	string16[] = "---98";
	char	string17[] = "+0298";
	char	string18[] = "++187";
	char	string19[] = "167 881";
	char	string20[] = "658 zcfgrthr";
	char	string21[] = "598+598";
	char	string22[] = "2147483647";
	char	string23[] = "-2147483648";
	char	string24[] = "99999999999999999999999999";
	char	string25[] = "-2147483648";
	char	string26[] = "2147483647";

	printf("%s", "---- ft_atoi ----\n");

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
	test_regular_fnc(string7);
	test_ft_fnc(string7);
	test_regular_fnc(string8);
	test_ft_fnc(string8);
	test_regular_fnc(string9);
	test_ft_fnc(string9);
	test_regular_fnc(string10);
	test_ft_fnc(string10);
	test_regular_fnc(string11);
	test_ft_fnc(string11);
	test_regular_fnc(string12);
	test_ft_fnc(string12);
	test_regular_fnc(string13);
	test_ft_fnc(string13);
	test_regular_fnc(string14);
	test_ft_fnc(string14);
	test_regular_fnc(string15);
	test_ft_fnc(string15);
	test_regular_fnc(string16);
	test_ft_fnc(string16);
	test_regular_fnc(string17);
	test_ft_fnc(string17);
	test_regular_fnc(string18);
	test_ft_fnc(string18);
	test_regular_fnc(string19);
	test_ft_fnc(string19);
	test_regular_fnc(string20);
	test_ft_fnc(string20);
	test_regular_fnc(string21);
	test_ft_fnc(string21);
	test_regular_fnc(string22);
	test_ft_fnc(string22);
	test_regular_fnc(string23);
	test_ft_fnc(string23);
	test_regular_fnc(string24);
	test_ft_fnc(string24);
	test_regular_fnc(string25);
	test_ft_fnc(string25);
	test_regular_fnc(string26);
	test_ft_fnc(string26);

	return 0;
}