/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <tissad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:33:50 by tissad            #+#    #+#             */
/*   Updated: 2024/12/13 17:27:23 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	main(void)
{
	ft_print_res(ft_isalpha(INT_MIN), "T0:");
	ft_print_res(ft_isalpha(CHAR_MIN), "T1:");
	ft_print_res(ft_isalpha('A'), "T2:");
	ft_print_res(ft_isalpha('H'), "T3:");
	ft_print_res(ft_isalpha('Z'), "T4:");
	ft_print_res(ft_isalpha('a'), "T5:");
	ft_print_res(ft_isalpha('h'), "T6:");
	ft_print_res(ft_isalpha('z'), "T7:");
	ft_print_res(ft_isalpha(CHAR_MAX), "T8:");
	ft_print_res(ft_isalpha(INT_MAX), "T9:");
	return (0);
}
