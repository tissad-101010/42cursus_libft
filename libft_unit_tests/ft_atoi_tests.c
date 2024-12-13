/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:50:42 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 15:06:56 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	ft_atoi_test(const char *test)
{
	if(ft_atoi(test) == atoi(test))
		return (1);
	return (0);
}

int	ft_atoi_tests(void)
{
	ft_printstr("\n\nft_atoi\t\t\t");
	ft_print_res(ft_atoi_test("0"), "T0:");
	ft_print_res(ft_atoi_test("1234"), "T1:");
	ft_print_res(ft_atoi_test("-1234"), "T2:");
	ft_print_res(ft_atoi_test("\t      \r  1234"), "T3:");
	ft_print_res(ft_atoi_test("adfgxc    1234"), "T4:");
	ft_print_res(ft_atoi_test("-1234qwe234"), "T5:");
	ft_print_res(ft_atoi_test("123     \t \r"), "T6:");
	ft_print_res(ft_atoi_test("00000000000000000001234"), "T7:");
	ft_print_res(!ft_atoi_test("12345678912345678912345678"), "T8:");
	return (0);
}
