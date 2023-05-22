/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:00:13 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/22 14:55:54 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{	
	size_t	l_size;

	if (!len && !big)
		return (0);
	l_size = ft_strlen(little);
	if (!l_size)
		return ((char *)big);
	while (*big && len-- >= l_size)
	{
		if (ft_strncmp(big, little, l_size) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
