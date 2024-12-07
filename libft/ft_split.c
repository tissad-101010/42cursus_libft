/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:55:39 by tissad            #+#    #+#             */
/*   Updated: 2023/11/30 13:03:32 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countstrs(char const *s, char c);
static int	ft_strlenset(char const *s, unsigned int start, char c);
static int	ft_strlenword(char const *s, unsigned int start, char c);
static void	free_strs_tab(char **tab);

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	start;
	size_t	len;
	int		nb_strs;
	char	**strs_tab;

	nb_strs = ft_countstrs(s, c);
	strs_tab = malloc((sizeof (void *)) * (nb_strs + 1));
	if (!strs_tab)
		return (strs_tab);
	i = 0;
	start = ft_strlenset(s, 0, c);
	while (i < nb_strs)
	{
		len = ft_strlenword(s, start, c);
		strs_tab[i] = ft_substr(s, start, len);
		if (!strs_tab[i])
			free_strs_tab(strs_tab);
		start += (len + ft_strlenset(s, start + len, c));
		i++;
	}
	strs_tab[i] = NULL;
	return (strs_tab);
}

static int	ft_countstrs(char const *s, char c)
{
	int	i;
	int	count;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_strlenword(char const *s, unsigned int start, char c)
{
	int	i;
	int	len;

	if (!s)
		return (0);
	i = start;
	len = 0;
	if (s[i] != c)
	{
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		return (len);
	}
	return (0);
}

static int	ft_strlenset(char const *s, unsigned int start, char c)
{
	int	i;
	int	len;

	if (!s)
		return (0);
	i = start;
	len = 0;
	if (s[i] == c)
	{
		while (s[i] && s[i] == c)
		{
			i++;
			len++;
		}
		return (len);
	}
	return (0);
}

static	void	free_strs_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	if (tab)
		free(tab);
}
/*
int	main(int ac, char **av)
{
	char	**tab;

	tab = ft_split(av[1], ' ');
	int i = 0;
	while (tab[i])
	{
		printf("%s\n",tab[i]);
		if (tab[i])
		i++;
	}
	free_strs_tab(tab);
	printf("%d\n", ft_countstrs(av[1], ' '));
}*/
