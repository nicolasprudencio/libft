/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:10:48 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/20 17:54:10 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*buf_dest;
	char	*buf_src;

	if (n == 0)
		return (dest);
	i = 0;
	buf_dest = (char *)dest;
	buf_src = (char *)src;
	if (n == 0)
		return (dest);
	while (i < n)
	{
		*(buf_dest + i) = *(buf_src + i);
		i++;
	}
	return (dest);
}
