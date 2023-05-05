/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:08:41 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/05 18:08:06 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	dst_size;
	size_t	i;
	size_t	j;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	i = 0;
	j = 0;
	if (dst_size >= size)
		return (src_size + size);
	while (src[j] && i < size - dst_size - 1)
	{
		dst[dst_size + i] = src[j];
		i++;
		j++;
	}
	dst[dst_size + i] = '\0';
	return (src_size + dst_size);
}
