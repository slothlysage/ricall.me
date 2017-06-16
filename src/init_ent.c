/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ent.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:31 by sjones            #+#    #+#             */
/*   Updated: 2017/06/15 21:12:49 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

t_ent	*init_ent(char *line)
{
	t_ent	*e;
	char	*t;

	t = line;
	if (!(e = (t_ent*)malloc(sizeof(t_ent))))
		return (NULL);
	if (e)
	{
		t += char_len(t);
        t++;
		e->user_id = strndup(t, char_len(t));
		t = next_in(t);
		e->event_id = strndup(t, char_len(t));
		t = next_in(t);
		e->ricall_time = strndup(t, 19);
		t = next_in(t);
		e->leave_time = strndup(t, 19);
		t = next_in(t);	
        e->start_date = strndup(t, 19);
		t = next_in(t);
		e->end_date = strndup(t, 19);
		t = next_in(t);
		e->location = strndup(t, char_len(t));
		t = next_in(t);
		e->current_address = strndup(t, addr_len(t));
		t = next_in(t);
		e->event_address = strndup(t, addr_len(t));
		t += addr_len(t) + 14;
		e->title = strndup(t, char_len(t));
		t = next_in(t);
		e->category = strndup(t, char_len(t));
		t = next_in(t);
		e->categoryid = ft_atoi(t);
		t = next_in(t);
		e->urgency = ft_atoi(t);
		t = next_in(t);
		e->reminded = ft_atoi(t);
		t = next_in(t);
		e->confirmation = ft_atoi(t);
		t = next_in(t);
		e->active = ft_atoi(t);
        e->next = NULL;
	}
	return (e);
}
