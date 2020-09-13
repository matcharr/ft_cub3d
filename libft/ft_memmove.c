/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:11:55 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 03:10:44 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (n && !dest && !src)
		return (dest);
	if ((unsigned long long)src < (unsigned long long)dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
**	int main()
**	{
**		char csrc[100] = "Geeksfor";
**		ft_memmove(csrc+5, "abc", 3);
**		printf("%s", csrc);
**		return 0;
**	}
*/
