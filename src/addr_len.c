/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addr_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 22:19:16 by sjones            #+#    #+#             */
/*   Updated: 2017/06/15 20:39:03 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

int		addr_len(char *line)
{
	int		r;
	char	*t;

	r = 0;
	t = line;
	if (ft_strncmp(line, "undefined", 9) == 0)
		return (9);
	while (*t++ != 39)
		r++;
	return (r);
}

