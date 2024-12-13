/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lstfunctions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:48:25 by tissad            #+#    #+#             */
/*   Updated: 2023/11/29 17:29:07 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	lst_printone(t_list *lst)
{
	int	*n;

	if (!lst)
		return ;
	n = (int *)lst->content;
	ft_putnbr_fd(*n, 1);
}

void	lst_print(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current)
	{
		lst_printone(current);
		current = current->next;
	}
}

void	lst_del(void *content)
{
	if(content)
		free(content);
	content = NULL;
}

void	*lst_ultimatemdifcontent(void *content)
{
	int	*n;
	int	*c;

	c = (int *) content;
	n = malloc(sizeof (int) * 1);
	if (!n)
		return (n);
	*n = *c + 10;
	return ((void *)n);
}

void	lst_modifcontent(void *content)
{
	int *c;

	c = (int *) content;
	*c += 10;
}


t_list	*lst_create(void (*ft_lstadd)(t_list **, t_list *))
{
	int		i;
	int		*ptr;
	t_list	*new;
	t_list	*lst;

	i = 0;
	lst = NULL;
	while (i < MAX)
	{
		ptr = malloc(sizeof (int) * 1);
		if(!ptr)
		{
			ft_lstclear(&lst, lst_del);
			return(NULL);
		}
		*ptr = i;
		new = ft_lstnew((void*)ptr);
		ft_lstadd(&lst, new);
		i++;
	}
	return (lst);
}
