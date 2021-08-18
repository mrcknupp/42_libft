/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodrigo <mrodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 04:51:00 by mrodrigo          #+#    #+#             */
/*   Updated: 2021/08/16 23:51:07 by mrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == (void *)0)
		(*lst) = new;
	else
	{
		if ((*lst)->next)
			ft_lstadd_back(&(*lst)->next, new);
		else
			(*lst)->next = new;
	}
}
