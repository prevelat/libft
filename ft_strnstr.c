/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:48:24 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/16 12:23:10 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (char *)(&haystack[i]);
	while (haystack[i] != '\0' && (i - 1) < (int)len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j - 1) < (int)len)
		{
			j++;
			if (needle[j] == '\0' && (i + j - 1) < (int)len)
				return (char *)(&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
