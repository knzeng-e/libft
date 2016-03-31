/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 07:17:56 by knzeng-e          #+#    #+#             */
/*   Updated: 2016/03/30 18:32:43 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	if (content == NULL)
	{
		list->content = NULL;
		list->next = NULL;
		list->content_size = 0;
		list->content_size = content_size;
	}
	else
	{
		list->content = (void *)content;
		list->content_size = content_size;
		list->next = NULL;
	}
	return (list);
}
