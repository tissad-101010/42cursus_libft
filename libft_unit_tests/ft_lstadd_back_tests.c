/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_tests.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:12:09 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 15:35:33 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	ft_lstadd_back_test(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current->next)
	{
		if (*(int*)current->content > *(int*)current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}
int	ft_lstadd_back_tests()
{
	t_list *lst;

	ft_printstr("\n\nft_lstadd_back\t\t");
	lst = lst_create(ft_lstadd_back);
/*===================================TEST0====================================*/
	ft_print_res(ft_lstadd_back_test(lst), "T0:");
/*===================================MEMFREE==================================*/
	ft_lstclear(&lst, lst_del);
	return (0);
}
