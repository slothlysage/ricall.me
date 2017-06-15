/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:46:53 by sjones            #+#    #+#             */
/*   Updated: 2017/06/14 22:18:40 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

void	begin_list(t_db *db, char *line)
{
	char	*t;

	t = line;
	if (!(DE = ft_memalloc(sizeof(t_ent))))
		return ;
	if (DE)
	{
		t = ft_strchr(t, 58);
		DE->user_id = strndup(line, char_len(line));
		t = ft_strchr(t, 58);
		DE->event_id = strndup(line, 30);
		t = ft_strchr(t, 58);
		DE->ricall_time = strndup(line, 19);
		t = ft_strchr(t, 58);
		DE->start_date = strndup(line, 19);
		t = ft_strchr(t, 58);
		DE->end_date = strndup(line, 19);
		t = ft_strchr(t, 58);
		DE->location = strndup(line, char_len(line));
		t = ft_strchr(t, 58);
		DE->current_address = strndup(line, char_len(line));
		t = ft_strchr(t, 58);
		DE->event_address = strndup(line, char_len(line));
		t = ft_strchr(t, 58);
		DE->title = strndup(line, char_len(line));
		t = ft_strchr(t, 58);
		DE->category = strndup(line, char_len(line));
		t = ft_strchr(t, 58);
		DE->categoryid = ft_atoi(line);
		t = ft_strchr(t, 58);
		DE->urgency = ft_atoi(line);
		t = ft_strchr(t, 58);
		DE->reminded = ft_atoi(line);
		t = ft_strchr(t, 58);
		DE->confirmation = ft_atoi(line);
		t = ft_strchr(t, 58);
		DE->active = ft_atoi(line); 
	}
}
