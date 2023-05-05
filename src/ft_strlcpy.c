/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:04:37 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/05 13:53:13 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	i;

	if (!src || !dst)
		return (0);
	src_size = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_size);
}
