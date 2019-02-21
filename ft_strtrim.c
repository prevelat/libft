/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:20:01 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/18 16:24:41 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*a;
	int		i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	while (s[j + 1] != '\0')
		j++;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	a = (char*)malloc((sizeof(char) * (j - i)) + 1);
	if (a == NULL)
		return (NULL);
	x = 0;
	while (i <= j)
	{
		a[x] = s[i];
		x++;
		i++;
	}
	a[x] = '\0';
	return (a);
}
