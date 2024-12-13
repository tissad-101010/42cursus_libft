/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:02:47 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 17:32:25 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	ft_lstmap_test0(t_list *l1, t_list *l2)
{
	if (!l1 && l2)
		return (0);
	return (1);
}

int	ft_lstmap_test1(t_list *l1, t_list *l2)
{
	t_list *iter_l1;
	t_list *iter_l2;

	iter_l1 = l1;
	iter_l2 = l2;
	while (iter_l1 && iter_l2)
	{
		if (*(int*)iter_l2->content - *(int*)iter_l1->content != 10)
			return (0);
		iter_l1 = iter_l1->next;
		iter_l2 = iter_l2->next;
	}
	return (1);
}

int	ft_lstmap_tests(void)
{
	t_list	*lst;
	t_list	*newlst;

	ft_printstr("\n\nft_lstmap\t\t");
/*==============================TEST0=========================================*/
	lst = NULL;
	newlst = ft_lstmap(lst, lst_ultimatemdifcontent, lst_del);
	ft_print_res(ft_lstmap_test0(lst, newlst), "T0:");
	if (newlst)
		ft_lstclear(&newlst, lst_del);
/*==============================TEST1=========================================*/
	lst = lst_create(ft_lstadd_front);
	newlst = ft_lstmap(lst, lst_ultimatemdifcontent, lst_del);
	ft_print_res(ft_lstmap_test1(lst, newlst), "T1:");
/*===============================MEMFREE======================================*/
	ft_lstclear(&lst, lst_del);
	ft_lstclear(&newlst, lst_del);
/*===============================TESTMEM======================================*/
	return (0);
}
