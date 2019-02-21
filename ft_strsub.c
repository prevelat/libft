/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 11:26:05 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/18 21:37:41 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*a;
	unsigned int		end;
	int					i;

	a = (char*)malloc((sizeof(char) * len) + 1);
	if (a == NULL)
		return (NULL);
	end = (start + (unsigned int)len);
	i = 0;
	while (start < end)
	{
		a[i] = s[start];
		start++;
		i++;
	}
	return (a);
}
