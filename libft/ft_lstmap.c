/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:49:58 by tissad            #+#    #+#             */
/*   Updated: 2023/11/21 13:48:52 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new;
	t_list	*current;
	void	*content;

	if (!lst)
		return (lst);
	newlst = NULL;
	content = NULL;
	current = lst;
	while (current)
	{
		content = f(current->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			return (newlst);
		}
		ft_lstadd_back(&newlst, new);
		current = current->next;
	}
	return (newlst);
}
