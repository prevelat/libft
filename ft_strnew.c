/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 21:02:49 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/17 21:14:38 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*a;
	size_t	i;

	i = 0;
	a = (char*)malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = '\0';
		i++;
	}
	return (a);
}
