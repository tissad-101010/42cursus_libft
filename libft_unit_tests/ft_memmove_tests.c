/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <tissad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:29:25 by tissad            #+#    #+#             */
/*   Updated: 2024/12/13 17:30:00 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft_tests.h"
#include <stdio.h>


int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	char *src = ft_strdup(av[1]);

	char *dest = src + 2;
	ft_memmove(dest, src, strlen(src));
	printf("src %p %s\ndest %p %s\n%ld\n", src, src, dest, dest, dest - src);
}
