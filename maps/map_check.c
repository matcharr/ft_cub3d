/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <matcharr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 13:42:18 by matcharr          #+#    #+#             */
/*   Updated: 2020/09/13 13:56:15 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "fill.h"

/*
** Check if we have a column and when it ends
*/

int     count_check_columns(char const * line)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while(line[i])
    {
        if (line[i] == '1')
            j++;
        else if (line[i]) != ' '
            return (0);
        i++;
    }
    return(j);
}

int     check_top_bottom_borders(t_str *map_buffer)
{
    int     first_line;
    int     last_line;
    t_str   *last;

    if (!map_buffer)
        return (0);
    first_line = count_check_columns(map_buffer->content);
    
}