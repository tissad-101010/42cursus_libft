/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_tests.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:11:05 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 15:08:15 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static int	ft_bzero_test(void *s, size_t n)
{
	size_t i;
	unsigned char *p;

	i = 0;
	ft_bzero(s, n);
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] != 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_bzero_tests(void)
{
	int	tab[4] = {1, 1024, 42, 9};

	ft_printstr("\n\nft_bzero\t\t");
	ft_print_res(ft_bzero_test((void *)tab, 4 * sizeof(int)), "T0:");
	return (0);
}
