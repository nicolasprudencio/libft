/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:55:06 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/02 20:33:01 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{	
	size_t			i;
	unsigned char	*t;

	i = 0;
	t = s;
	while (i < n)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
