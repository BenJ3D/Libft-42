/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/15 10:58:16 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_putstr_fd.c"
#include "../ft_putchar_fd.c"
#include "../ft_putnbr_fd.c"

int	main(void)
{

	printf("%s", "---- ft_putnbr_fd ----\n");

	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(100, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(1, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(100, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-598, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-1, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-900, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);
	return 0;
}