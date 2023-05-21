/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:18:53 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/20 21:11:44 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;
	size_t			i;

	c_dest = (unsigned char *) dest;
	c_src = (unsigned char *) src;
	if (!dest || !src)
		return (NULL);
	if (c_dest > c_src)
	{	
		i = n;
		while (i > 0)
		{
			i--;
			c_dest[i] = c_src[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	return (c_dest);
}

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t		i;
// 	char		*buf_dest;
// 	const char	*buf_src;

// 	if (dest == NULL || src == NULL)
// 		return (NULL);
// 	buf_dest = (char *)dest;
// 	buf_src = src;
// 	if (dest < src)
// 	{
// 		i = 0;
// 		while (i++ < n)
// 			*(buf_dest + i - 1) = *(buf_src + i - 1);
// 	}
// 	else
// 	{
// 		i = n;
// 		while (i-- > 0)
// 			*(buf_dest + i) = *(buf_src + i);
// 	}
// 	return (dest);
// }