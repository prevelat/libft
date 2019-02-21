/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:29:07 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/20 22:55:34 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_n(char const *s, char c)
{
	int		n;
	int		i;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			n++;
		i++;
	}
	return (n);
}

static int		get_z(const char *s, char c)
{
	int		z;
	int		i;

	z = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			z++;
		i++;
	}
	return (z);
}

static void			print_arr(char **arr, char const *s, char c)
{
	int		i;
	int		j;
	int		x;

	i = -1;
	j = 0;
	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c)
			x++;
		if (x > 0 && s[x - 1] == c && s[x] != c)
			i++;
		if (s[x] != c)
		{
			arr[i][j] = s[x];
			j++;
			x++;
		}
		if (s[x] == c && s[x - 1] != c)
		{
			arr[i][j] = '\0';
			j = 0;
		}
	}
	i++;
	arr[i][j] = 0;
	return ;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		n;
	int		z;
	int		i;
	
	i = 0;
	n = get_n(s, c);
	z = get_z(s, c);
	arr = (char**)malloc((sizeof(char) * (n + z)) + 1 );
	if (arr == NULL)
		return (NULL);
	print_arr(arr, s, c);
	return (arr);
}
