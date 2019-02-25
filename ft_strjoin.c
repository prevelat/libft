/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 11:48:53 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/23 14:28:28 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	if (!(a = (char*)malloc((sizeof(char) * (ft_strlen((char*)s1) +
					ft_strlen((char*)s2))) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		a[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		a[j++] = s2[i++];
	a[j] = '\0';
	return (a);
}
