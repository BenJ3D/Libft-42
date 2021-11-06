/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/06 15:49:40 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"
#include "../ft_memchr.c"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;

    // On recherche une valeur inhéxistante :
    void * found = ft_memchr( data, 57, size );
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

    // On recherche une valeur existante :
    found = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }

    return (EXIT_SUCCESS);
}


// void	test_regular_fnc(int *a, int c, size_t n)
// {
// 	printf("%d", memchr(a, c, n));
// 	printf("%c", '\n');
// }

// void	test_ft_fnc(int *a, int c, size_t n)
// {
// 	printf("%d", ft_memchr(a, c, n));
// 	printf("%c", '\n');
// }

// int	main(void)
// {
// 	int		memblck1[] = {10, 5, 9, 3, 100};
// 	int		memblck2[] = {};

// 	printf("%s", "---- ft_memchr ----\n");

// 	test_regular_fnc(memblck1, 5454, 5*sizeof(int));
// 	test_ft_fnc(memblck1, 5454, 5*sizeof(int));

// 	test_regular_fnc(memblck1, 10, 5*sizeof(int));
// 	test_ft_fnc(memblck1, 10, 5*sizeof(int));

// 	test_regular_fnc(memblck1, 100, 5*sizeof(int));
// 	test_ft_fnc(memblck1, 100, 5*sizeof(int));

// 	test_regular_fnc(memblck2, 99, 5*sizeof(int));
// 	test_ft_fnc(memblck2, 99, 5*sizeof(int));

// 	test_regular_fnc(memblck2, 99, 0);
// 	test_ft_fnc(memblck2, 99, 0);

// 	return 0;
// }