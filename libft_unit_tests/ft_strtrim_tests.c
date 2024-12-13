/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:51:21 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 15:11:19 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	ft_strtrim_test(char const *s1, char const *set, size_t value)
{
	char	*res;

	res = ft_strtrim(s1, set);
	if (!res)
		return (0);
	if (strlen(res) == value)
	{
		free(res);
		return (1);
	}
	free(res);
	return (0);
}

int	ft_strtrim_tests(void)
{
	char	*s1;
	char	*set;

	ft_printstr("\n\nft_strtrim\t\t");
	s1 = "++++tests+++ft_strtrim++++";
	set = "____+___";
	ft_print_res(ft_strtrim_test(s1, set, strlen(s1) - 8), "T0:");
	set = NULL;
	ft_print_res(ft_strtrim_test(s1, set, strlen(s1)), "T1:");
	set = "";
	ft_print_res(ft_strtrim_test(s1, set, strlen(s1)), "T2:");
	s1 = "";
	set = "";
	ft_print_res(ft_strtrim_test(s1, set, strlen(s1)), "T3:");
	s1 = "";
	set = "++++tests+++ft_strtrim++++";
	ft_print_res(ft_strtrim_test(s1, set, 0), "T4:");
	s1 = "-+*#==========********####";
	set = "-+*#=";
	ft_print_res(ft_strtrim_test(s1, set, 0), "T5:");
	s1 = "+-+$+tests+&+*+ft_strtrim+%+*+-+";
	set = "$$$$$$+-%*$++++++++___=====DDDD}}}[[]";
	ft_print_res(ft_strtrim_test(s1, set, strlen(s1) - 12), "T6:");
	return (0);
}
