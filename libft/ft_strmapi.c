/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:12:03 by tissad            #+#    #+#             */
/*   Updated: 2023/11/30 13:12:38 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*sres;

	if (!s || !f)
		return (NULL);
	sres = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!sres)
		return (sres);
	i = 0;
	while (s[i])
	{
		sres[i] = f(i, s[i]);
		i++;
	}
	sres[i] = '\0';
	return (sres);
}
