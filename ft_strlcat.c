/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 21:06:47 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/18 10:50:15 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		r;
	size_t		l;
	size_t		i;
	int			x;

	r = ft_strlen(dst) + ft_strlen(src);
	l = dstsize - ft_strlen(dst) - 1;
	i = 0;
	x = 0;
	if (dstsize == 0 || dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (dst[i] != '\0')
		i++;
	while (src[x] != '\0' && x < (int)l)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	return (r);
}
