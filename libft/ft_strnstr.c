/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahanak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:10:10 by vahanak           #+#    #+#             */
/*   Updated: 2023/10/22 18:36:04 by vahanak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		tmp = len;
		while (big[i + j] == little[j] && big[i + j] && i + j < tmp)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char little[] = "qwert";
	const char big[] = "lkhi";
	size_t len = 4;
	printf("la mienne = %s\n", ft_strnstr(big, little, len));
	printf("la leur = %s\n", strstr(big, little));
	return(0);
}
*/
