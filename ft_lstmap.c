/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodrigo <mrodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 04:53:21 by mrodrigo          #+#    #+#             */
/*   Updated: 2021/08/17 00:52:52 by mrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*add;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		add = ft_lstnew(lst->content);
		if (!(add))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		add->content = f(add->content);
		ft_lstadd_back(&new, add);
		lst = lst->next;
	}
	return (new);
}
