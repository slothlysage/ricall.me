/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ent.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:52 by sjones            #+#    #+#             */
/*   Updated: 2017/06/14 22:45:56 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

int		print_ent(t_db *db, char *event_id)
{
	t_ent	*t;
	FILE	*fp;

	fp = stdout;
	t = db->ents;
	while (t && ft_strcmp(t->event_id, event_id) != 0)
		t = t->next;
	if (t)
		all_puts(t, fp);
	else
		printf("There was no entry for %s\n", event_id);
	return (2);
}
