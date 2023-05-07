/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:48:05 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/06 22:10:34 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (!n)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (--n && *str1 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

int main(void)
{
	char	s1[] = {0, 0, 127, 0};
	char	s2[] = {0, 0, 42, 0};

	printf("str: %d\n\n", memcmp(s1, s2, 4));
	printf("ft_str: %d\n", ft_memcmp(s1, s2, 4));
	return (0);
}

