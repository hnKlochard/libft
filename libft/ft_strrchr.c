/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahanak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:07:30 by vahanak           #+#    #+#             */
/*   Updated: 2023/10/19 15:22:06 by vahanak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	tmp;

	i = 0;
	tmp = -1;
	while (s[i])
	{
		if (s[i] == c % 256)
			tmp = i;
		i++;
	}
	if (tmp == -1)
	{
		if (c == '\0')
			return ((char *)s + i);
		return (NULL);
	}
	return ((char *) s + tmp);
}
