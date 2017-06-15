/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_ent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:46:41 by sjones            #+#    #+#             */
/*   Updated: 2017/06/14 22:58:42 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

void	add_ent(t_db *db, char *line)
{
	t_ent	*t1;
	t_ent	*t2;

	if (DE == NULL)
    {
        begin_list(db, line);
        return ;
    }
    t1 = DE;
	t2 = init_ent(line);
	while (t1->next)
	{
		t1 = t1->next;
	}
	t1->next = t2;
}
