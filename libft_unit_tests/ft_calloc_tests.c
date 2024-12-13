/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:09:43 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 17:19:57 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	ft_calloc_test(size_t nmemb, size_t size)
{
	void	*p;

	p = ft_calloc(nmemb, size);
	if(!p)
		return (0);
	free(p);
	return (1);
}

int	ft_calloc_tests(void)
{
	ft_printstr("\n\nft_calloc\t\t");
	ft_print_res(ft_calloc_test(0, 0), "T0:");
	ft_print_res(ft_calloc_test(10, 0), "T1:");
	//ft_print_res(!ft_calloc_test(SIZE_MAX, sizeof (char)), "T2:");
	return (0);
}
