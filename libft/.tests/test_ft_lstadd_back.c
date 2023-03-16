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
#include "../ft_lstlast.c"
#include "../ft_lstadd_back.c"


int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst4;
	t_list	*lst5;

	lst1 = ft_lstnew("Salut ");
	lst2 = ft_lstnew("Bob ! ");
	lst3 = ft_lstnew("Le fond de l'ocean est : ");
	lst4 = ft_lstnew("bleu ");
	lst5 = ft_lstnew("et profond !");

	ft_lstadd_front(&lst4, lst3);
	ft_lstadd_front(&lst3, lst2);
	ft_lstadd_front(&lst2, lst1);
	ft_lstadd_back(&lst1, lst5);

	printf("%s", (char *)lst1->next->next->next->next->content);
}
