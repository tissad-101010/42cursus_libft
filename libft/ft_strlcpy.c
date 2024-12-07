/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:34:37 by tissad            #+#    #+#             */
/*   Updated: 2023/11/21 11:51:03 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	cpylen;

	i = 0;
	cpylen = 0;
	slen = ft_strlen(src);
	if (size > 0)
	{
		if (size - 1 < slen)
			cpylen = size - 1;
		else
			cpylen = slen;
		while (i < cpylen)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (slen);
}*/
/*implementation sans le strlen*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		if (size > 0 && i < size - 1)
			dst[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		if (size - 1 >= i)
			dst[i] = '\0';
		else
			dst[size - 1] = '\0';
	}
	return (i);
}
