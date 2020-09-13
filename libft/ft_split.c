/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 09:49:04 by pvinson           #+#    #+#             */
/*   Updated: 2019/11/20 04:37:18 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	split_strclen(const char *s, char c)
{
	size_t	size;

	size = 0;
	if (!s)
		return (0);
	while (s[size] && s[size] != c)
		size++;
	return (size);
}

static int	split_count_words(const char *s, char c)
{
	int		nbw;

	if (!s)
		return (0);
	nbw = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			nbw++;
		while (*s && *s != c)
			s++;
	}
	return (nbw);
}

static void	*split_deltab(char **tab)
{
	int i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			free(tab[i]);
			tab[i] = NULL;
			i++;
		}
		free(tab);
	}
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	int		nbw;
	int		i;

	if (!s)
		return (NULL);
	nbw = split_count_words(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (nbw + 1))))
		return (NULL);
	i = -1;
	while (++i < nbw && *s)
	{
		while (*s && *s == c)
			s++;
		if (!(tab[i] = (char *)malloc((split_strclen(s, c) + 1))))
			return (split_deltab(tab));
		ft_strlcpy(tab[i], s, split_strclen(s, c) + 1);
		tab[i][split_strclen(s, c)] = '\0';
		while (*s && *s != c)
			s++;
	}
	tab[i] = (char *)('\0');
	return (tab);
}
