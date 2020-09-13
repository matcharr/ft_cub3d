/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 05:54:54 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 02:50:32 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	if (!size || !count)
		return (malloc(0));
	if (!(p = malloc(count * size)))
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		((char *)p)[i] = 0;
		i++;
	}
	return (p);
}
