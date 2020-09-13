/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:10:11 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/19 15:48:52 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpop(t_list **alst, t_list *pop)
{
	t_list *tmp;

	if (!*alst || !pop)
		return (NULL);
	tmp = *alst;
	if (tmp == pop)
		*alst = pop->next;
	else
	{
		while (tmp->next != pop)
		{
			if (!(tmp = tmp->next))
				return (NULL);
		}
		tmp->next = pop->next;
	}
	pop->next = NULL;
	return (pop);
}
