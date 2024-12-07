/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:47:21 by tissad            #+#    #+#             */
/*   Updated: 2023/11/27 13:44:53 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	int		i;
	int		srclen;
	char	*dest;

	i = 0;
	srclen = ft_strlen(src);
	dest = malloc(sizeof (char) * (srclen + 1));
	if (!dest)
		return (NULL);
	while (i < srclen)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
