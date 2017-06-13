/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:46:53 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 20:46:00 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

void	begin_list(t_db *db, char *time, char *event, char *color)
{
	t_ent *t;

	if (!(DE = ft_memalloc(sizeof(t_ent))))
		return ;
	if (DE)
	{
		DE->num = 1;
		DE->time = time;
		DE->event = event;
		DE->color = color;
		DE->next = NULL;
	}
}
