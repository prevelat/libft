/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:20:06 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/16 12:21:18 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	unsigned long long		nb;
	int						i;
	int						flag;

	i = 0;
	nb = 0;
	flag = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	if (str[i] == '+' || str[i] == '-' || ft_isdigit(str[i]) == 0)
		return (0);
	while (ft_isdigit(str[i]) == 1 && nb <= 9223372036854775807)
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (nb > 9223372036854775807)
		return (flag == -1 ? 0 : -1);
	return (nb * flag);
}
