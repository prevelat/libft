/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 18:51:40 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/16 13:47:15 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	while (src[i] != '\0' && i <= len)
	{
		dst[i] = src[i];
		i++;
	}
	if (i == len)
		return (dst);
	if (src[i] == '\0')
		while (dst[i] != '\0')
		{
			dst[i] = '\0';
			i++;
		}
	return (dst);
}
