/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:03:15 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 18:22:17 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static int	ft_lstlast_test0(t_list *lst)
{
	t_list	*last;

	last = ft_lstlast(lst);
	if(last && !last->next)
		return (1);
	return (0);
}

static int	ft_lstlast_test1(t_list *lst)
{
	t_list	*last;

	last = ft_lstlast(lst);
	if (*(int *)last->content == 9)
		return (1);
	return (0);
}

int	ft_lstlast_tests(void)
{
	t_list *lst;

	ft_printstr("\n\nft_lstlast\t\t");
	lst = lst_create(ft_lstadd_back);
/*================================TEST0=======================================*/
	ft_print_res(ft_lstlast_test0(lst), "T0:");
/*================================TEST1=======================================*/
	ft_print_res(ft_lstlast_test1(lst), "T1:");
/*================================MEMFREE=====================================*/
	ft_lstclear(&lst, lst_del);
	return (0);
}
