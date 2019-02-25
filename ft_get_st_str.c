/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_st_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 19:27:07 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/23 19:38:25 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_get_st_str(char *s, char c)
{
	char		*str;
	size_t		i;
	size_t		j;
	size_t		len;

	i = -1;
	j = 0;
	len = 0;
	while (s[i++] != c)
		len++;
	if (!(str = (char *)malloc((sizeof(char) * len) + 1)))
		return (NULL);
	i = 0;
	while (s[i] != c)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
