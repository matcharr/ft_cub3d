/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:45:48 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 03:40:43 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (n == 0)
		return (0);
	if (i == n)
		i--;
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
