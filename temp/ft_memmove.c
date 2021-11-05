/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:54:03 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/05 17:54:46 by bducrocq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// int main ()
// {
// //	printf("%s", memmove("coucou les gens comment ca va", "Hello World", 11));
// 	//printf("%s", "Hello World");
// 	return(0);
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {

// 	int x = 6;
//     char csrc[100] = "Geeksfor";
//     memcpy(csrc + x, csrc, strlen(csrc) + 1);
//     printf("%s\n", csrc);

//  char csrc2[100] = "Geeksfor";
//     memmove(csrc2 + x, csrc2, strlen(csrc2) + 1);
//     printf("%s", csrc);

//     return 0;
// }

// Sample program to show that memmove() is better than
// memcpy() when addresses overlap.
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100] = "ABCDEFG12345678";
	char *first, *second;
	first = str;
	second = str;
	printf("Original string :%s\n ", str);
	
	// when overlap happens then it just ignore it
	memcpy(first + 2, first, 15);
	printf("memcpy overlap : %s\n ", str);

	// when overlap it start from first position
	memmove(second + 2, first, 15);
	printf("memmove overlap : %s\n ", str);

	return 0;
}
