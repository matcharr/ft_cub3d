/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:36:20 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/06 23:22:27 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*
** 	int main ()
**	{
**		char str[] = "This is a sample string";
**		char * pch;
**		printf ("Looking for the 's' character in \"%s\"...\n",str);
**		pch=strchr(str,'s');
**		while (pch!=NULL)
**		{
**			printf ("found at %d\n",pch-str+1);
**			pch=strchr(pch+1,'s');
**		}
**		return 0;
**	}
*/
