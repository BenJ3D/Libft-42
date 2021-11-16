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
#include "../ft_lstiter.c"
#include "../ft_toupper.c"
#include "../ft_strdup.c"
#include "../ft_strlen.c"
#include "../ft_strlcpy.c"
#include "../ft_lstmap.c"
#include "../ft_lstclear.c"
#include "../ft_lstdelone.c"


void *alterint(void * p) {
	void * r = malloc(sizeof(int)); 
	*(int*)r = *(int*)p + 3; 
	return (r);
}

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst4;
	t_list *lst10;
	// t_list	*lst5;

	int	tab1[] = {9, 1, 2, 4, 5, 6, 7};
	int	tab2[] = {99, 11, 12, 14, 15, 16, 17};
	int	tab3[] = {999, 111, 112, 114, 115, 116, 117};
	int	tab4[] = {9999, 111, 112, 114, 115, 116, 117};
	lst1 = ft_lstnew(tab1);
	lst2 = ft_lstnew(tab2);
	lst3 = ft_lstnew(tab3);
	lst4 = ft_lstnew(tab4);

	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst2, lst3);
	ft_lstadd_back(&lst3, lst4);

	lst10 = ft_lstmap(lst1, alterint, free);
	printf("%d", *(int *)&lst1->next->next->content[0]);
	printf("%s", "\n");
	printf("%d", *(int *)&lst10->next->next->content[0]);
}
