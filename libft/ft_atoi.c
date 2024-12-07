/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <tissad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:02:13 by tissad            #+#    #+#             */
/*   Updated: 2024/12/07 12:13:07 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The atoi() function converts the initial portion of the string pointed
// to by str to int representation.
int	ft_atoi(const char *str)
{
	int	sig;
	int	nb;

	sig = 1;
	nb = 0;
	while (*str)
	{
		while ((*str == ' ') || (*str >= '\t' && *str <= '\r'))
			str++;
		if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sig *= -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			nb = nb * 10 + (int)(*str - '0');
			str++;
		}
		break ;
	}
	return (nb * sig);
}
