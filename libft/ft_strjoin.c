/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahanak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:41:44 by vahanak           #+#    #+#             */
/*   Updated: 2023/10/22 18:17:42 by vahanak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*join;
	size_t			len;
	unsigned int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	join = (char *)malloc(sizeof(char) * len + 1);
	if (!join)
		return (NULL);
	while (*s1 != '\0')
		join[i++] = *s1++;
	while (*s2 != '\0')
		join[i++] = *s2++;
	join[i] = '\0';
	return (join);
}
/*
int	main(void)
{
	printf("%s", ft_strjoin("salut", "coucou"));
	return (0);
}
*/
