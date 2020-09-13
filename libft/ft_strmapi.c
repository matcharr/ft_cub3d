/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:51:47 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 03:37:41 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char    *ns;
	int             i;

	if (!s || !f)
		return (NULL);
	ns = (char *)malloc(ft_strlen(s) + 1);
	if (!ns)
		return (NULL);
	i = 0;
	while (*s)
	{
		ns[i] = (*f)(i, *s);
		s++;
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
