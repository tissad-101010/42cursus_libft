/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_tests.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:54:43 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 17:18:55 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static int	ft_lstdelone_test(t_list **lst)
{
	t_list	*first;
	t_list	*second;

	first = *lst;
	second = first->next;
	ft_lstdelone(first, lst_del);
	ft_lstclear(&second, lst_del);
	return (1);
}

int	ft_lstdelone_tests()
{
	t_list	*lst;

	lst = lst_create(ft_lstadd_back);
	ft_printstr("\n\nft_lstdelone\t\t");
	ft_print_res(ft_lstdelone_test(&lst), "T0:");
	return (0);
}
