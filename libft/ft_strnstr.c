/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 07:57:52 by tissad            #+#    #+#             */
/*   Updated: 2023/11/30 09:39:48 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (!big && !len)
		return (NULL);
	i = 0;
	j = 0;
	little_len = ft_strlen(little);
	while (big[i])
	{
		j = 0;
		while (little[j] && little[j] == big[i + j] && i + j < len)
			j++;
		if (j == little_len)
			return ((char *)&big[i]);
		i++;
	}
	if (j != little_len)
		return (NULL);
	return ((char *)big);
}
/*
#include <string.h>
#include <stdio.h>
int main (void)
{
	const char *largestring = "lorem ipsum dolor sit amet";
	const char *smallstring = "dolor";
	char *ptr;
	ptr = strstr(largestring, smallstring);
	if(ptr)
		printf("%s\n", ptr);
	else
		printf("NULL\n");
	ptr = ft_strnstr(largestring, smallstring, 13);
	if(ptr)
		printf("%s\n", ptr);
	else
		printf("NULL\n");
}
*/
