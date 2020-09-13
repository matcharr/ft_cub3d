/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:51:49 by matcharr          #+#    #+#             */
/*   Updated: 2019/11/19 15:38:56 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ite;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	ite = *lst;
	while (ite)
	{
		tmp = ite->next;
		ft_lstdelone(ite, del);
		ite = tmp;
	}
	*lst = (NULL);
}
