/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 23:23:13 by knzeng-e          #+#    #+#             */
/*   Updated: 2016/03/30 03:01:51 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		**ft_strsplit(char const *s, char c)
{
	int		nb_words;
	int		j;
	char	**output;

	nb_words = ft_count_words(s, c);
	output = (char **)malloc(sizeof(char *) * nb_words + 1);
	if (output)
	{
		j = 0;
		while (j < nb_words)
		{
			ft_get_word(s, j, c, output);
			j++;
		}
		output[j + 1] = "\0";
	}
	return (output);
}
