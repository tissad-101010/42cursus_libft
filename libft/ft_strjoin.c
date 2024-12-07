/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:37:59 by tissad            #+#    #+#             */
/*   Updated: 2023/11/30 13:18:15 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen (s2) + 1;
	dest = malloc(sizeof(char) * (size));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, size);
	ft_strlcat(dest, s2, size);
	return (dest);
}
