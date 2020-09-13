/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:46:26 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 03:52:07 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*
**	int main()
**	{
**		char c, result;
**
**		c = 'M';
**		result = ft_tolower(c);
**		printf("ft_tolower(%c) = %c\n", c, result);
**
**		c = 'm';
**		result = ft_tolower(c);
**		printf("ft_tolower(%c) = %c\n", c, result);
**
**		c = '+';
**		result = ft_tolower(c);
**		printf("ft_tolower(%c) = %c\n", c, result);
**
**		return 0;
**	}
*/
