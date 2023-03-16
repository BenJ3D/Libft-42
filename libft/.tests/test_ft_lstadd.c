/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/12 16:51:52 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_calloc.c"
#include "../ft_memset.c"
#include "../ft_lstnew.c"
#include "../ft_lstadd_front.c"


int	main(void)
{
	t_list  *lst1;
    t_list  *lst2;

    lst1 = ft_lstnew("Salut ");
    lst2 = ft_lstnew("Bob !");

    ft_lstadd_front(&lst2, lst1);

	printf("%s", (char *)lst1->content);
    printf("%s", (char *)lst1->next->content);
}