/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:03:06 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/11 22:26:08 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	char			*str;
	size_t			s_size;
	size_t			i;
	
	if (!s)
		return (NULL);
	s_size = ft_strlen(s);
	if (start > s_size)
		return (ft_strdup(""));
	if (len > s_size - start)
		len = s_size - start;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int	main(void)
// {
// 	printf("ft: %s", ft_substr("str", 42, 42000000));
// 	return (0);
// }
