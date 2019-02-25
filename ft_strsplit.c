/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 22:03:56 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/24 20:54:00 by fprevela         ###   ########.fr       */
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
		if (s[i] != c && (i == 0 || (i > 0 && s[i - 1] == c)))
			n++;
		i++;
	}
	return (n);
}

static int		len(char const *s, char c, int i)
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

	i = 0;
	x = 0;
	if (!(arr = (char **)malloc(sizeof(char*) * size(s, c) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) ||
				(i > 0 && s[i - 1] == c && s[i] != c && s[i] != '\0'))
		{
			if (!(arr[x] = (char *)malloc(sizeof(char) * len(s, c, i) + 1)))
			{
				ft_free_arr(arr);
				return (NULL);
			}
			i = i + len(s, c, i) - 1;
			x++;
		}
		i++;
	}
	return (arr);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**arr;
	int			i;
	size_t		x;

	if (s == NULL)
		return (NULL);
	arr = NULL;
	arr = m_all(arr, s, c);
	if (arr == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) ||
				(i > 0 && s[i - 1] == c && s[i] != c && s[i] != '\0'))
		{
			arr[x] = ft_get_st_str((char *)&s[i], c);
			i = i + len(s, c, i) - 1;
			x++;
		}
		i++;
	}
	arr[x] = NULL;
	return (arr);
}
