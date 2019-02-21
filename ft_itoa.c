/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:20:36 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/18 22:23:37 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findsize(int n)
{
	long	i;
	int		j;

	i = (long)n;
	j = 0;
	if (i < 0)
	{
		j++;
		i = i * -1;
	}
	while ((i / 10) != 0)
	{
		j++;
		i = i / 10;
	}
	j++;
	return (j);
}

static void	reverse(char *a)
{
	char	b;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(a);
	j--;
	if (a[i] == '-')
		i++;
	while (i < j)
	{
		b = a[i];
		a[i] = a[j];
		a[j] = b;
		i++;
		j--;
	}
	return ;
}

char		*ft_itoa(int n)
{
	char	*a;
	long	i;
	int		j;
	int		z;

	i = (long)n;
	j = findsize(n);
	a = (char*)malloc((sizeof(char) * j) + 1);
	z = 0;
	if (i < 0)
	{
		a[z] = '-';
		i = i * -1;
		z++;
	}
	while (z < j)
	{
		a[z] = i % 10 + '0';
		i = i / 10;
		z++;
	}
	a[z] = '\0';
	reverse(a);
	return (a);
}
