/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:18:53 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/04 20:34:45 by nprudenc         ###   ########.fr       */
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
