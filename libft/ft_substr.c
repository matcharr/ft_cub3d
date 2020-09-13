/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 23:29:16 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 03:51:37 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char                    *ns;
	size_t                  i;

	if (!(ns = (char *)malloc(len + 1)))
		return (NULL);
	i = -1;
	while (++i < len)
		ns[i] = '\0';
	if (!s || start > ft_strlen(s))
		return (ns);
	i = 0;
	while (i < len && s[start + i])
	{
		ns[i] = s[start + i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
