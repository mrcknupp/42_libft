/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodrigo <mrodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 03:36:00 by mrodrigo          #+#    #+#             */
/*   Updated: 2021/08/17 02:16:43 by mrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	if (ft_strlen(ptr2) == 0)
		return (ptr1);
	if (n <= 0)
		return (NULL);
	while (ptr1[i] && n >= ft_strlen(ptr2))
	{
		if (ft_strncmp(&ptr1[i], ptr2, ft_strlen(ptr2)) == 0)
			return (&ptr1[i]);
		i++;
		n--;
	}
	return (0);
}
