/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:10:18 by tissad            #+#    #+#             */
/*   Updated: 2023/11/30 13:06:32 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contain(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sptr;
	char	*eptr;
	char	*res;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	sptr = (char *)s1;
	eptr = sptr + (ft_strlen(s1) - 1);
	while (*sptr && ft_contain(*sptr, set))
		sptr++;
	while (eptr > sptr && ft_contain(*eptr, set))
		eptr--;
	size = ((eptr + 1) - sptr) + 1;
	res = malloc(sizeof(char) * size);
	if (!res)
		return (res);
	ft_strlcpy(res, sptr, size);
	return (res);
}

static int	ft_contain(char c, char const *set)
{
	int	i;

	i = 0;
	while (set && set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
