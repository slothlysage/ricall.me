/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:46:53 by sjones            #+#    #+#             */
/*   Updated: 2017/06/14 22:18:40 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

char    *next_in(char *line)
{
    line = ft_strchr(line, 44);
    line = ft_strchr(line, 58);
    line += 2;
    if (*line++ != 39)
        line--;
    return (line);
}
