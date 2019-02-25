/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:49:47 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/22 19:51:32 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*a;
	int		i;

	if (s == NULL)
		return (NULL);
	a = (char*)malloc((sizeof(char) * ft_strlen(s)) + 1);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		a[i] = f(s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
