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

void alterchar(void *p)
{
	++*(char *)p;
}

int	main(void)
{
	int		i;
	char	s1[] = "Coucou";
	t_list *lst1 = ft_lstnew(s1);

	ft_lstiter(lst1, alterchar);
	printf("%s", (char *)lst1->content);
}
