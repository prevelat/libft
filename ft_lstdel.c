/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 14:58:16 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/22 17:48:44 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*wait;

	while (alst && *alst)
	{
		wait = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = wait;
	}
	return ;
}
