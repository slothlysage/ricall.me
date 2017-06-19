/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:46:53 by sjones            #+#    #+#             */
/*   Updated: 2017/06/18 22:21:19 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

void	begin_list(t_db *db, char *line)
{
	char	*t;

	t = line;
	if (!(DE = (t_ent*)malloc(sizeof(t_ent))))
		return ;
	if (DE)
	{
		t += char_len(t);
		t++;
		DE->user_id = strndup(t, char_len(t));
		t = next_in(t);
		DE->event_id = strndup(t, char_len(t));
		t = next_in(t);
		DE->ricall_time = strndup(t, 19);
		t = next_in(t);
		DE->leave_time = strndup(t, 19);
		t = next_in(t);
		DE->start_date = strndup(t, 19);
		t = next_in(t);
		DE->end_date = strndup(t, 19);
		t = next_in(t);
		DE->location = strndup(t, char_len(t));
		t = next_in(t);
		DE->current_address = strndup(t, addr_len(t));
		t = next_in(t);
		DE->event_address = strndup(t, addr_len(t));
		t += addr_len(t) + 15;
		DE->title = strndup(t, char_len(t));
		t = next_in(t);
		DE->category = strndup(t, char_len(t));
		t = next_in(t);
		DE->categoryid = ft_atoi(t);
		t = next_in(t);
		DE->urgency = ft_atoi(t);
		t = next_in(t);
		DE->reminded = ft_atoi(t);
		t = next_in(t);
		DE->confirmation = ft_atoi(t);
		t = next_in(t);
		DE->active = atoi(t);
		DE->next = NULL;
	}
}
