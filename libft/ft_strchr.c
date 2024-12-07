/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:55:25 by tissad            #+#    #+#             */
/*   Updated: 2023/11/21 12:00:12 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	to_find;

	to_find = (char) c;
	while (*s)
	{
		if (*s == to_find)
			return ((char *) s);
		s++;
	}
	if (*s == to_find)
		return ((char *) s);
	return (NULL);
}
