/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:04:35 by tissad            #+#    #+#             */
/*   Updated: 2023/11/27 10:48:25 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	size_alloc;
	void	*mem;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	size_alloc = (nmemb * size);
	mem = (void *)malloc(size_alloc);
	if (!mem)
		return (mem);
	ft_bzero(mem, size_alloc);
	return (mem);
}
