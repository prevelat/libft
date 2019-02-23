/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 13:04:30 by fprevela          #+#    #+#             */
/*   Updated: 2019/02/21 20:44:31 by fprevela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	link = (t_list*)malloc(sizeof(link));
	if (link == NULL)
		return (NULL);
	link->content = (void*)malloc(sizeof(content_size));
	if (link->content == NULL)
	{
		free(link);
		return (NULL);
	}
	if (content == 0)
	{
		link->content = NULL;
		link->content_size = 0;
		link->next = NULL;
		return (link);
	}
	link->content = (void*)content;
	link->content_size = content_size;
	link->next = NULL;
	return (link);
}
