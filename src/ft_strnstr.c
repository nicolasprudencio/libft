/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:00:13 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/15 15:46:51 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_mycmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (*s1 == *s2)
	{	
		s1++;
		s2++;
		if (*s2 == '\0')
			return (1);
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{	
	size_t	l_size;

	l_size = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	if (!len && *little)
		return (NULL);
	while (*big && len--)
	{
		if (*little == '\0')
			return ((char *)big);
		if (len == 1 && l_size > len)
			return (NULL);
		if (*little == *big)
			if (ft_mycmp(big, little, l_size) == 1)
				return ((char *)big);
		big++;
	}
	return (NULL);
}
