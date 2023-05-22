/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:06:59 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/22 15:39:12 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	size_max;
	size_t	i;

	i = 0;
	size_max = nmemb * size;
	if (size_max / size != nmemb)
		return (NULL);
	str = malloc(size_max);
	if (!str)
		return (NULL);
	while (i < size_max)
		str[i++] = 0;
	return (str);
}

// int	main(void)
// {	
// 	int	size;
// 	int	i;
// 	int	*tst;
// 	int	*tst2;

// 	i = 5;
// 	size = sizeof(int);
// 	tst = ft_calloc(i, size);
// 	tst2 = calloc (i, size);
// 	tst[0] = 100003;
// 	tst[1] = 2009903;
// 	tst2[0] = 100003;
// 	tst2[1] = 2009903;
// 	printf("cal: ");
// 	while (i--)
// 	{
// 		printf("%d", *tst2);
// 	}
// 	printf("\n\n");
// 	printf("ft: ");
// 	i = 5;
// 	while (i--)
// 	{	
// 		printf("%d", *tst);
// 	}
// 	printf("\n");
// 	return (0);
// }
