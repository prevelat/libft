/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 21:39:42 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/16 13:41:51 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;
	size_t	i;

	i = 0;
	a = (char*)dst;
	b = (char*)src;
	if (a <= b)
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	if (a > b)
		while (len-- > 0)
			a[len] = b[len];
	return (dst);
}
