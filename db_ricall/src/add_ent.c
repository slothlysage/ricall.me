/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_ent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:46:41 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 20:42:41 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

void	add_ent(t_db *db, int num, char *time, char *event, char *color)
{
	t_ent	*t;
	t_ent	*next;
	char	c;

	t = DE;
	while (t->next && strcmp(DE->time, time) < 0)
	{
		t = t->next;
	}
	next = t->next;
	t->next = init_ent(num, time, event, color);
	t->next->next = next;
}
