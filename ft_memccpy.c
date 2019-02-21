/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 19:06:05 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/16 13:40:49 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*a;
	char	*b;
	size_t	i;

	i = 0;
	a = (char*)dst;
	b = (char*)src;
	while (i < n && b[i] != (char)c)
	{
		a[i] = b[i];
		i++;
	}
	if (b[i] == (char)c)
	{
		a[i] = b[i];
		i++;
		return (&a[i]);
	}
	return (NULL);
}
