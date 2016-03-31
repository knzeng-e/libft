/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 04:36:05 by knzeng-e          #+#    #+#             */
/*   Updated: 2016/03/31 19:43:26 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ret;

	ret = NULL;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == c)
			return ((void *)(s + i));
		i++;
	}
	return (ret);
}
