/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:09:32 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/21 20:48:55 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*a;

	new = (t_list*)malloc(sizeof(lst));
	a = (t_list*)malloc(sizeof(lst));
	if (new == NULL || a == NULL)
		return (NULL);
	new = f(lst);
	new->next = a;
	lst = lst->next;
	while (lst->next != NULL)
	{
		a = f(lst);
		lst = lst->next;
		a = a->next;
	}
	free(a);
	return (new);
}
