/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:09:31 by tissad            #+#    #+#             */
/*   Updated: 2023/11/30 09:48:49 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*srcptr;
	unsigned char	*destptr;

	if (!dest && !src && n)
		return (dest);
	srcptr = (unsigned char *) src;
	destptr = (unsigned char *) dest;
	if (dest > src && dest < src + n)
	{
		i = n - 1;
		while (i + 1)
		{
			destptr[i] = srcptr[i];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
