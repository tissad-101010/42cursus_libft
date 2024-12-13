/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:25:14 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 18:30:07 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	ft_lstsize_test(t_list *lst)
{
	return (ft_lstsize(lst) == MAX);
}

int ft_lstsize_tests(void)
{
	t_list *lst;

	ft_printstr("\n\nft_lstsize\t\t");
	lst = lst_create(ft_lstadd_back);
/*================================TEST0=======================================*/
	ft_print_res(ft_lstsize_test(lst), "T0:");
/*================================MEMFREE=====================================*/
	ft_lstclear(&lst, lst_del);
	return (0);
}
