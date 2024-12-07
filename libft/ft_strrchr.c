/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:16:08 by tissad            #+#    #+#             */
/*   Updated: 2023/11/16 15:14:10 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	to_find;

	ptr = NULL;
	to_find = (char) c;
	while (*s)
	{
		if (*s == to_find)
			ptr = (char *) s;
		s++;
	}
	if (*s == to_find)
		ptr = (char *) s;
	return (ptr);
}
