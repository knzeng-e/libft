/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 07:56:01 by knzeng-e          #+#    #+#             */
/*   Updated: 2016/03/21 18:49:40 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char				*out;
	unsigned int		i;

	out = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (out)
	{
		while (s[i])
		{
			out[i] = f(i, s[i]);
			i++;
		}
		out[i] = '\0';
	}
	return (out);
}
