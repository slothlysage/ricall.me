/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ent.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:31 by sjones            #+#    #+#             */
/*   Updated: 2017/06/14 22:20:12 by sjones           ###   ########.fr       */
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
		t = ft_strchr(t, 58);
		e->user_id = strndup(line, char_len(line));
		t = ft_strchr(t, 58);
		e->event_id = strndup(line, 30);
		t = ft_strchr(t, 58);
		e->ricall_time = strndup(line, 19);
		t = ft_strchr(t, 58);
		e->start_date = strndup(line, 19);
		t = ft_strchr(t, 58);
		e->end_date = strndup(line, 19);
		t = ft_strchr(t, 58);
		e->location = strndup(line, char_len(line));
		t = ft_strchr(t, 58);
		e->current_address = strndup(line, char_len(line));
		t = ft_strchr(t, 58);
		e->event_address = strndup(line, char_len(line));
		t = ft_strchr(t, 58);
		e->title = strndup(line, char_len(line));
		t = ft_strchr(t, 58);
		e->category = strndup(line, char_len(line));
		t = ft_strchr(t, 58);
		e->categoryid = ft_atoi(line);
		t = ft_strchr(t, 58);
		e->urgency = ft_atoi(line);
		t = ft_strchr(t, 58);
		e->reminded = ft_atoi(line);
		t = ft_strchr(t, 58);
		e->confirmation = ft_atoi(line);
		t = ft_strchr(t, 58);
		e->active = ft_atoi(line); 
	}
	return (e);
}
