/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 10:05:54 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 03:52:23 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*
**	int main()
**	{
**		char c, result;
**
**		c = 'M';
**		result = ft_toupper(c);
**		printf("ft_toupper(%c) = %c\n", c, result);
**
**		c = 'm';
**		result = ft_toupper(c);
**		printf("ft_toupper(%c) = %c\n", c, result);
**
**		c = '+';
**		result = ft_toupper(c);
**		printf("ft_toupper(%c) = %c\n", c, result);
**
**		return 0;
**	}
*/
