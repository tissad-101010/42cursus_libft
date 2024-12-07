/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:37:14 by tissad            #+#    #+#             */
/*   Updated: 2023/11/16 15:06:44 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_len(unsigned int un);
static void			ft_itoa_bis(char *toa, unsigned int index, unsigned int un);

char	*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	un;
	char			toa[64];

	i = 0;
	if (n < 0)
	{
		toa[i] = '-';
		i++;
		un = (unsigned int)(-n);
	}
	else
		un = (unsigned int) n;
	i += (get_len(un));
	ft_itoa_bis(toa, i - 1, un);
	toa[i] = '\0';
	return (ft_strdup(toa));
}

static unsigned int	get_len(unsigned int un)
{
	unsigned int	i;

	if (un == 0)
		return (1);
	i = 0;
	while (un > 0)
	{
		un /= 10;
		i++;
	}
	return (i);
}

static void	ft_itoa_bis(char *toa, unsigned int index, unsigned int un)
{
	unsigned int	r;
	unsigned int	q;

	r = un % 10;
	q = un / 10;
	if (q == 0)
	{
		toa[index] = ('0' + r);
		return ;
	}
	ft_itoa_bis(toa, index - 1, q);
	toa[index] = ('0' + r);
}
