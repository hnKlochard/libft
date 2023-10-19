/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahanak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:41:44 by vahanak           #+#    #+#             */
/*   Updated: 2023/10/18 15:11:50 by vahanak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*p;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = ft_strlen(s1) + ft_strlen(s2);
	j = 0;
	k = 0;
	p = malloc(sizeof (char) * i);
	if (!p)
		return (NULL);
	while (s1[k])
	{
		p[j] = s1[k];
		j++;
		k++;
	}
	k = 0;
	while (s2[k])
	{
		p[j] = s2[k];
		j++;
		k++;
	}
	p[j] = '\0';
	return (p);
}
/*
int	main(void)
{
	printf("%s", ft_strjoin("salut", "coucou"));
	return (0);
}
*/
