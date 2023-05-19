/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:37:55 by nprudenc          #+#    #+#             */
/*   Updated: 2023/05/18 21:53:06 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char **ft_split(char const *s, char c)
// {

// }

#include <stdio.h>

static int	word_cnt(char *s, char c)
{
	int	words;
	int	control;

	words = 0;
	control = 0;
	while (*s)
	{
		if (*s != c && control == 0)
		{
			control = 1;
			words++;
		}
		else if (*s == c)
			control = 0;
		s++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int		s_size;
	char	**p;
	int		i;

	s_size = ft_strlen(s);
	p = ft_calloc((word_cnt(s, c) + 1) * sizeof(char *));
	if (!*s || !p)
		return (NULL);
	
	
}

int	main(void)
{
	int	*ponteiro;
	int	**ponteiro_do_ponteiro;
	int	valor;

	valor = 50;
	ponteiro = &valor;
	ponteiro_do_ponteiro = &ponteiro;
	printf("%d\n", **ponteiro_do_ponteiro);
	return (0);
}
