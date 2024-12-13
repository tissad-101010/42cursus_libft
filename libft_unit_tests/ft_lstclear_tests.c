/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_tests.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:42:21 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 15:49:37 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	ft_lstclear_test()
{
	t_list	*lst;

	lst = lst_create(ft_lstadd_back);
	if(!lst)
		return(0);
	ft_lstclear(&lst, lst_del);
	if(lst)
		return(0);
	return (1);
}

int	ft_lstclear_tests(void)
{
	ft_printstr("\n\nft_lstclear\t\t");
	ft_print_res(ft_lstclear_test(), "T0:");
	return (0);
}
