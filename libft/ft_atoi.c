/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:48:29 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/20 04:30:17 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *s)
{
	int			sign;
	long long	r;

	r = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		r = r * 10 + *s - '0';
		s++;
	}
	return (sign * (int)r);
}

/*
**	int    main(void)
**	{
**		char test1[] = "-2188806309609485834085934853484958340";
**		char test2[] = "+123409898080898989888070877777770000098";
**		printf("test1 : %d\n", ft_atoi(test1));
**		printf("---------------------------------\n");
**		printf("test1 VRAI : %d\n", atoi(test1));
**		printf("---------------------------------\n");
**		printf("test2 : %d\n", ft_atoi(test2));
**		printf("---------------------------------\n");
**		printf("test2 VRAI: %d\n", atoi(test2));
**		printf("---------------------------------\n");
**		printf("EXIT_SUCCESSFULL");
**		return (0);
**	}
*/
