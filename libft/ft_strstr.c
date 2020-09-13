/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 04:29:01 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 03:49:28 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	if (!*s2)
		return ((char*)s1);
	else if (!*s1)
		return (NULL);
	return (*s2 == *s1 && ft_strstr(s1 + 1, s2 + 1)
			== s1 + 1) ? (char*)s1 : (char*)ft_strstr(s1 + 1, s2);
}
