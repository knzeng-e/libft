/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 18:53:00 by knzeng-e          #+#    #+#             */
/*   Updated: 2016/03/31 19:46:36 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_compute(char *nbr, int i, int nb, int sign)
{
	while (nb > 0)
	{
		nbr[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	if (sign)
	{
		nbr[i++] = '-';
	}
	nbr[i] = '\0';
}

char		*ft_itoa(int nb)
{
	char	*nbr;
	int		i;
	int		sign;

	nbr = (char *)malloc(sizeof(char) * ft_get_int_size(nb) + 1);
	if (!nbr)
		return (NULL);
	if (nb == 0 || nb == -2147483648)
		return ((nb == 0) ? "0" : "-2147483648");
	sign = (nb < 0);
	nb = ((nb < 0) ? -nb : nb);
	i = 0;
	ft_compute(nbr, i, nb, sign);
	return (ft_strrev(nbr));
}
