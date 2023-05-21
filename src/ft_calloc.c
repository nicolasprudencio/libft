/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:06:59 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/20 17:38:27 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (nmemb * size / size != nmemb)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	while (i < nmemb * size)
	{
		str[i] = 0;
		i++;
	}
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
