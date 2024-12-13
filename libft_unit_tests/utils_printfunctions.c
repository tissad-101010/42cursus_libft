/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:14:29 by tissad            #+#    #+#             */
/*   Updated: 2023/11/22 12:06:41 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	ft_printstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_print_res(int res, char *nbtest)
{
	ft_printstr(nbtest);
	if (res)
		write(1, "OK\t", 3);
	else
		write(1, "KO\t", 3);
}
