/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 16:59:36 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 18:30:13 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

void	print_color(char *time, char *event, char *color)
{
	if (strncmp(color, "blu", 3) == 0)
		printf("\x1b[45m%s\x1b[0m - \x1b[34m%s\x1b[0m\n", time, event);
	if (strncmp(color, "red", 3) == 0)
		printf("\x1b[45m%s\x1b[0m - \x1b[91m%s\x1b[0m\n", time, event);
	if (strncmp(color, "gre", 3) == 0)
		printf("\x1b[45m%s\x1b[0m - \x1b[92m%s\x1b[0m\n", time, event);
}
