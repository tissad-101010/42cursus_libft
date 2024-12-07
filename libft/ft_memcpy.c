/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:56:29 by tissad            #+#    #+#             */
/*   Updated: 2023/11/30 09:51:35 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*srcptr;
	unsigned char	*dstptr;

	if (!dest && !src && n)
		return (dest);
	i = 0;
	srcptr = (unsigned char *) src;
	dstptr = (unsigned char *) dest;
	while (i < n)
	{
		dstptr[i] = srcptr[i];
		i++;
	}
	return (dest);
}
