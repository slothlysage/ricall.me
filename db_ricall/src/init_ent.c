/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ent.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:31 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 20:43:13 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

t_ent	*init_ent(int num, char *time, char *event, char *color)
{
	t_ent	*ent;

	if (!(ent = (t_ent*)malloc(sizeof(t_ent))))
		return (NULL);
	if (ent)
	{
		ent->num = num;
		ent->time = time;
		ent->event = event;
		ent->color = color;
		ent->next = NULL;
	}
	return (ent);
}
