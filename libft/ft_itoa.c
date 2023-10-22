/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahanak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:38:29 by vahanak           #+#    #+#             */
/*   Updated: 2023/10/22 18:23:57 by vahanak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_nbr(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * (size + 1));
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

char	*ft_itoa_bis(int count, char *res, long int nb, int i)
{
	while (count > i)
	{
		count--;
		res[count] = (nb % 10) + '0';
		nb /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			count;
	int			i;
	char		*res;

	nb = n;
	count = ft_count_nbr(nb);
	i = 0;
	if (count == 0)
		count++;
	res = ft_strnew(count);
	if (!res)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		res[0] = '-';
		i++;
	}
	res[count] = '\0';
	res = ft_itoa_bis(count, res, nb, i);
	return (res);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(11111123));
	return (0);
}
*/
