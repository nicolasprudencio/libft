/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:11:59 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/12 21:13:54 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (*s)
// 	{
// 		i++;
// 		s++;
// 	}
// 	return (i);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	char	*str_cpy;
	char	*str_start;

	end = ft_strlen(s1);
	start = 0;
	while (end > 0 && ft_strchr(set, s1[end - 1]))
		end--;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	str_cpy = malloc((end - start + 1) * sizeof(char));
	if (!str_cpy)
		return (0);
	str_start = str_cpy;
	while (*s1)
	{
		if (strchr(set, *s1))
			s1++;
		else
			*str_cpy++ = *s1++;
	}
	*str_cpy = '\0';
	return (str_start);
}

// int main(void)
// {
// 	printf("%s.", ft_strtrim("###123###", "#!"));
// 	return (0);
// }