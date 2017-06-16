/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_ent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:46:41 by sjones            #+#    #+#             */
/*   Updated: 2017/06/15 18:44:04 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

void	add_ent(t_db *db, char *line)
{
	t_ent	*t1;
	t_ent	*t2;
	t_ent	*t3;

	ft_putendl("plerp1");
	if (DE == NULL)
    {
        begin_list(db, line);
        return ;
    }
    t1 = DE;
	t2 = init_ent(line);
	while (t1->next && ft_strcmp(t1->start_date, t2->start_date) < 0)
	{
	ft_putendl("plerp4");
		t1 = t1->next;
	}
	t3 = t1->next;
	t1->next = t2;
	all_puts(t2, stdout);
	t1->next->next = t3;
	ft_putendl("plerp5");
}
