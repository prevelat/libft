/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 23:30:14 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/16 13:41:06 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*a;
	size_t	i;

	a = (char*)s;
	i = 0;
	while (a[i] != '\0' && i < n)
	{
		if (a[i] == (char)c)
			return (&a[i]);
		i++;
	}
	return (NULL);
}
