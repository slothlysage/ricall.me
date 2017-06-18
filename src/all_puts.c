/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_puts.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:15 by sjones            #+#    #+#             */
/*   Updated: 2017/06/18 13:41:35 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

void	all_puts(t_ent *ent, FILE *fp)
{
	if (ent == NULL)
		fputs("No event to display\n", stdout);
	else
		fprintf(fp, "{ event:\n   { user_id: '%s',\n     event_id: '%s',\n     ricall_time: '%s',\n     leave_time: '%s',\n     start_date: '%s',\n     end_date: '%s',\n     location: '%s',\n     current_address: '%s',\n     event_address: '%s',\n     title: '%s',\n     category: '%s',\n     category_id: %d,\n     urgency: %d,\n     reminded: %d,\n     confirmation: %d,\n     active: %d } }\n", ent->user_id, ent->event_id, ent->ricall_time, ent->leave_time, ent->start_date, ent->end_date, ent->location, ent->current_address, ent->event_address, ent->title, ent->category, ent->categoryid, ent->urgency, ent->reminded, ent->confirmation, ent->active);
}
