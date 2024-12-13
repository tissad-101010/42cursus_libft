/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:34:37 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 18:02:45 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	ft_lstiter_test(t_list **lst)
{
	t_list *current;
	int i;

	current = *lst;
	i = 0;
	while (current)
	{
		if(*(int *)(current->content) - 10 != i)
			return (0);
		i++;
		current = current->next;
	}
	return (1);
}

int	ft_lstiter_tests(void)
{
	t_list *lst;

	ft_printstr("\n\nft_lstiter\t\t");
	lst = lst_create(ft_lstadd_back);
	ft_lstiter(lst, lst_modifcontent);
	ft_print_res(ft_lstiter_test(&lst), "T0:");
	ft_lstclear(&lst, lst_del);
	return (0);
}
