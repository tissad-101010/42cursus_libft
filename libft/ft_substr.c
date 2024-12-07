/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:35:28 by tissad            #+#    #+#             */
/*   Updated: 2023/11/30 13:18:33 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_args(size_t slen, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			size_alloc;
	unsigned int	i;

	if (!s)
		return (NULL);
	size_alloc = ft_check_args(ft_strlen(s), start, len);
	substr = malloc(sizeof(char) * (size_alloc + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < size_alloc)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

static size_t	ft_check_args(size_t slen, unsigned int start, size_t len)
{
	if (start < slen)
	{
		if (len < slen - start)
			return (len);
		else
			return (slen - start);
	}
	return (0);
}
