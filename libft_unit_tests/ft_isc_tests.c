/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isc_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <tissad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:33:50 by tissad            #+#    #+#             */
/*   Updated: 2024/12/13 18:02:03 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

static int	ft_isc_test(int (*isft)(int), int (*isc)(int), char *f)
{
	int	i;

	i = CHAR_MIN;
	ft_printstr(f);
	while (i <= CHAR_MAX)
	{
	
		if (!isft(i) != !isc(i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_isc_tests(void)
{
	ft_print_res(ft_isc_test(ft_isalpha, isalpha, "\n\nft_isalpha\t\t"), "T0:");
	ft_print_res(ft_isc_test(ft_isalnum, isalnum, "\n\nft_isalnum\t\t"), "T0:");
	ft_print_res(ft_isc_test(ft_isascii, isascii, "\n\nft_isascci\t\t"), "T0:");
	ft_print_res(ft_isc_test(ft_isdigit, isdigit, "\n\nft_isdigit\t\t"), "T0:");
	ft_print_res(ft_isc_test(ft_isprint, isprint, "\n\nft_isprint\t\t"), "T0:");
	return (0);
}
