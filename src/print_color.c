/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 16:59:36 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 18:57:53 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

void	print_color(char *time, char *event, char *color)
{
	if (strncmp(color, "blu", 3) == 0)
		printf("\x1b[45m%s\x1b[0m - \x1b[44m%s\x1b[0m\n", time, event);
	if (strncmp(color, "red", 3) == 0)
		printf("\x1b[45m%s\x1b[0m - \x1b[41m%s\x1b[0m\n", time, event);
	if (strncmp(color, "gre", 3) == 0)
		printf("\x1b[45m%s\x1b[0m - \x1b[42m%s\x1b[0m\n", time, event);
}
