/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:45 by sjones            #+#    #+#             */
/*   Updated: 2017/06/14 22:47:03 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

int		print_all(t_db *db)
{
	t_ent	*t;
	FILE	*fp;

	fp = stdout;
	ft_putendl("\x1b[43mUpcoming Events\x1b[0m");
	t = DE;
	while (t)
	{
		all_puts(t, fp);
		t = t->next;
	}
	return (1);
}
