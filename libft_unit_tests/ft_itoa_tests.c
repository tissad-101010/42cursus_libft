/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:48:42 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 15:09:09 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	ft_itoa_test(int n)
{
	char *res;

	res = ft_itoa(n);
	if(!res)
		return (0);
	if(n == atoi(res))
	{
		free(res);
		return (1);
	}
	free(res);
	return (0);
}

int	ft_itoa_tests(void)
{
	ft_printstr("\n\nft_itoa\t\t\t");
	ft_print_res(ft_itoa_test(0), "T0:");
	ft_print_res(ft_itoa_test(INT_MAX), "T1:");
	ft_print_res(ft_itoa_test(INT_MIN), "T2:");
	return (0);
}
