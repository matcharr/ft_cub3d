/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:18:31 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 03:06:29 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	if (n == 0)
		return (0);
	i = 0;
	cs1 = (unsigned char*)s1;
	cs2 = (unsigned char*)s2;
	while (i < n && cs1[i] == cs2[i])
		i++;
	if (i == n)
		i--;
	return (cs1[i] - cs2[i]);
}

/*
**	int main ()
**	{
**		char buffer1[] = "DWgaOtP12df0";
**		char buffer2[] = "DWGAOTP12DF0";
**
**		int n;
**
**		n=ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );
**
**		if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
**		else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
**		else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);
**
**	return 0;
*/
