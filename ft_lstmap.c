/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:09:32 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/23 00:01:39 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*a;

	if (lst == NULL)
		return (NULL);
	a = f(lst);
	new = a;
	while (lst->next != NULL)
	{
		lst = lst->next;
		a->next = f(lst);
		if (a->next == NULL)
		{
			free(a->next);
			return (NULL);
		}
		a = a->next;
	}
	return (new);
}
