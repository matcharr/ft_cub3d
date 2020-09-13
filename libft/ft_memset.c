/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 02:37:39 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 03:53:55 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int    i;

	i = -1;
	while (++i < n)
		*((unsigned char *)s + i) = (unsigned char)c;
	return (s);
}

/*
** int main (void)
** {
**   char str[50] = "GeeksForGeeks is for programming geeks.";
**   printf("\nBefore memset(): %s\n", str);
**   ft_memset(str+13, '.', 8*sizeof(char));
**   printf("After memset():  %s", str);
**   return 0;
** }
*/
