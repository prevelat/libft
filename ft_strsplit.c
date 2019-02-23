/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:29:07 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/22 17:46:08 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		full(char const *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			k++;
		if (s[i] != c)
			j++;
		i++;
	}
	i = j + k;
	return (i);
}

static int		len(char const *s, char c, int i)
{
	int		len;

	len = 0;
	while (s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static int		str(char *str, char const *s, char c, int i)
{
	int		j;

	j = 0;
	while (s[i] != c)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	i--;
	str[j] = '\0';
	return (i);
}

static int		end_arr(char **arr, int a)
{
	arr[a] = (char*)malloc(sizeof(char));
	if (arr[a] == NULL)
	{
		free(arr);
		return (1);
	}
	arr[a][0] = '\0';
	return (0);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		a;

	i = 0;
	a = 0;
	if ((arr = (char**)malloc((sizeof(char*) * full(s, c)) + 1)) == NULL)
		return (NULL);
	while (s[i++] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
		{
			if ((arr[a] = (char*)malloc((sizeof(char) * len(s, c, i)) + 1))
					== NULL)
			{
				free(arr);
				return (NULL);
			}
			i = str(arr[a], s, c, i);
			a++;
		}
	}
	if ((end_arr(arr, a)) == 1)
		return (NULL);
	return (arr);
}
