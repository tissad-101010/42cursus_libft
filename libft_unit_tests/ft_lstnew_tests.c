/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:17:05 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 15:09:49 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"



int	ft_lstnew_test1(t_list *new, int *data)
{
	if (*(int *)new->content != *data)
		return(0);
	return (1);
}

int	ft_lstnew_test0(t_list *new)
{
	if (new->next)
		return (0);
	return (1);
}

int	ft_lstnew_tests(void)
{
	int		*data;
	t_list	*new;

	ft_printstr("\n\nft_lstnew\t\t");
	data = malloc(sizeof (int) * 1);
	if(!data)
		return (1);
	*data = 42;
	new = ft_lstnew((void *)data);
/*=================================TEST0======================================*/
	ft_print_res(ft_lstnew_test0(new), "T0:");
/*=================================TEST1======================================*/
	ft_print_res(ft_lstnew_test1(new, data), "T1:");
/*=================================MEMFREE====================================*/
	free(data);
	free(new);
	return (0);
}
