/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:12:51 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/06 21:20:44 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*end;
	int		counter;

	counter = ft_strlen(s);
	end = (char *)s + counter;
	if (!s)
		return (NULL);
	if (c == '\0')
		return (end);
	while (end != s)
	{	
		if (*end == (char)c)
			return ((char *)end);
		end--;
	}
	if ((char)c == (char)*end)
		return ((char *)end);
	return (NULL);
}
