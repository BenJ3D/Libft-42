/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/03 10:35:33 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"
#include "../ft_toupper.c"

void	test_regular_fnc(char	*string)
{
	int		i;

	i = 0;
	while (string[i])
	{
		i++;
		printf("%c", toupper(string[i]));
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
		printf("%c", ft_toupper(string[i]));
	}
	printf("%c", '\n');
}

int	main(void)
{
	char	string1[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	string2[] = "11xq02er4\200WYZabcdefgh9ijk*&lmnˆpkr st+vwxyFaqz";
	char	string3[] = "\127\1125feq\00p0`e@[{}sqg\201";

	printf("%s", "---- ft_toupper ----\n");

	test_regular_fnc(string1);
	test_ft_fnc(string1);

	test_regular_fnc(string2);
	test_ft_fnc(string2);

	test_regular_fnc(string3);
	test_ft_fnc(string3);

	return 0;
}