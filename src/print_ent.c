/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ent.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:52 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 20:44:30 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

int		print_ent(t_db *db, int num)
{
	t_ent	*t;

	t = db->ents;
	while (t && t->num != num)
		t = t->next;
	if (t)
		print_color(t->time, t->event, t->color);
	else
		printf("There was no entry for %d\n", num);
	return (2);
}
