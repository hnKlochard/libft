/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahanak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:44:41 by vahanak           #+#    #+#             */
/*   Updated: 2023/10/18 15:14:27 by vahanak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	int	free_size;
	int	src_long;

	src_long = ft_strlen(src);
	if (size > 0)
	{
		free_size = size - 1;
		while (*src && free_size > 0)
		{
			*dest = *src;
			dest++;
			src++;
			free_size--;
		}
		*dest = '\0';
	}
	return (src_long);
}
