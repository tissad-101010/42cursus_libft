/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:22:24 by tissad            #+#    #+#             */
/*   Updated: 2023/11/16 15:49:53 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;
	int				r;
	int				q;

	un = (unsigned int) n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		un = n * -1;
	}
	else
		un = n;
	r = un % 10;
	q = un / 10;
	if (q == 0)
	{
		ft_putchar_fd(('0' + r), fd);
		return ;
	}
	ft_putnbr_fd(q, fd);
	ft_putchar_fd(('0' + r), fd);
}
