/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodrigo <mrodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 04:11:46 by mrodrigo          #+#    #+#             */
/*   Updated: 2021/08/17 02:05:36 by mrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*ptr;

	if (!f || !s)
		return (NULL);
	i = -1;
	len = ft_strlen(s);
	ptr = (char *)malloc(len + 1);
	if (!(ptr))
		return (0);
	while (++i < len)
		ptr[i] = f(i, s[i]);
	ptr[i] = '\0';
	return (ptr);
}
