/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 19:52:59 by knzeng-e          #+#    #+#             */
/*   Updated: 2016/03/30 01:20:19 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*out;
	unsigned int	i;
	size_t			j;

	out = (char *)malloc(sizeof(char) * len + 1);
	if (out)
	{
		i = start;
		j = 0;
		while (j < len)
		{
			out[j++] = s[i];
			i++;
		}
		out[i] = '\0';
	}
	return (out);
}
