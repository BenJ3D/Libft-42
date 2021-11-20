/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/02 16:38:10 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_isalpha.c"

void	test_regular_fnc(char	*string)
{
	int		i;

	i = 0;
	while (string[i])
	{
		i++;
		printf("%i", isalpha(string[i]));
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
		printf("%i", ft_isalpha(string[i]));
	}
	printf("%c", '\n');
}

int	main(void)
{
	char	string1[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	string2[] = "A8BCDEF3IJKLMNOPQRSTU\200WYZabcdefgh9ijk*&lmnˆpkr st+vwxyz";
	char	string3[] = "\127\1125feq\00p0`e@[{}sqg\201";

	printf("%s", "---- ft_isalpha ----\n");

	test_regular_fnc(string1);
	test_ft_fnc(string1);

	test_regular_fnc(string2);
	test_ft_fnc(string2);

	test_regular_fnc(string3);
	test_ft_fnc(string3);

	return 0;
}