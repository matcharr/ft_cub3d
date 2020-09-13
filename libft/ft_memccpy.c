/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:08:46 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 04:23:05 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dst;
	unsigned char	*sourc;

	i = 0;
	dst = (unsigned char *)dest;
	sourc = (unsigned char *)src;
	while (i < n)
	{
		dst[i] = sourc[i];
		if (dst[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}

/*
**	int main()
**	{
**		char csrc[100] = "Geeksfor";
**		ft_memccpy(csrc+5, "abc", 3 , 3);
**		printf("%s", csrc);
**		return 0;
**	}
*/
