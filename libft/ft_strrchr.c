/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:39:27 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 03:48:10 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char    *loc;

	loc = NULL;
	while (*s)
	{
		if (*s == (char)c)
			loc = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)(s));
	return (loc);
}
