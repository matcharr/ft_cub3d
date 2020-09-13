/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:39:04 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 03:50:31 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s, char const *trim)
{
	char				*ns;
	size_t				start;
	size_t				end;
	size_t				i;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] && ft_strchr(trim, s[start]))
		start++;
	end = ft_strlen(s);
	while (end > start && ft_strchr(trim, s[end]))
		end--;
	end++;
	ns = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!ns)
		return (ns);
	i = 0;
	while (i < end - start)
	{
		ns[i] = s[i + start];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
