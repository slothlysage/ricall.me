/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_blank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 18:48:11 by sjones            #+#    #+#             */
/*   Updated: 2017/06/18 22:09:37 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

t_ent	*init_blank(void)
{
	t_ent	*blank;

	if (!(blank = (t_ent*)malloc(sizeof(t_ent))))
		return (NULL);
	if (blank)
	{
		blank->user_id = "";
		blank->event_id = "";
		blank->ricall_time = "";
		blank->leave_time = "";
		blank->start_date = "";
		blank->end_date = "";
		blank->location = "";
		blank->current_address = "";
		blank->event_address = "";
		blank->title = "";
		blank->category = "";
		blank->categoryid = 0;
		blank->urgency = 0;
		blank->reminded = 0;
		blank->confirmation = 0;
		blank->active = 0;
		blank->next = NULL;
	}
	return (blank);
}
