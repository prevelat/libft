/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 22:03:56 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/24 16:57:54 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size(char const *s, char c)
{
	size_t		i;
	size_t		n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			n++;
		if (s[i] != c && (i == 0 || (i > 0 && s[i - 1] == c)))
			n++;
		i++;
	}
	n++;
	return (n);
}

static size_t	len(char const *s, char c, size_t i)
{
	size_t		len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char		**m_all(char **arr, char const *s, char c)
{
	size_t		i;
	size_t		x;

	i = -1;
	x = 0;
	if (!(arr = ft_memalloc(size(s, c))))
		return (NULL);
	while (s[i++])
		if ((i == 0 && s[i] != c) ||
				(i > 0 && s[i - 1] == c && s[i] != c && s[i] != '\0'))
		{
			if (!(arr[x] = ft_memalloc(len(s, c, i) + 1)))
				break ;
			i = i + len(s, c, i);
			x++;
		}
	i--;
	if (s[i] != '\0')
	{
		arr = ft_free_arr(arr);
		return (NULL);
	}
	if (!(arr[x] = ft_memalloc(sizeof(char))))
		arr = ft_free_arr(arr);
	return (arr);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**arr;
	size_t		i;
	size_t		x;

	if (!s)
		return (NULL);
	arr = NULL;
	arr = m_all(arr, s, c);
	if (!arr)
		return (NULL);
	i = -1;
	x = 0;
	while (s[i++])
		if ((i == 0 && s[i] != c) ||
				(i > 0 && s[i - 1] == c && s[i] != c && s[i] != '\0'))
		{
			arr[x] = ft_get_st_str((char *)&s[i], c);
			i = i + len(s, c, i);
			x++;
		}
	arr[x] = NULL;
	return (arr);
}
