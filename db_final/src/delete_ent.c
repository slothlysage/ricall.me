/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_ent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:33 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 19:45:02 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		delete_ent(t_db *db, char *key)
{
	t_ent	*t;

	printf("deleting %s now\n", key);
	t = DE;
	if (strcmp(t->key, key) == 0)
		DE = t->next;
	else
	{
		while (strcmp(t->next->key, key) != 0)
			t = t->next;
		if (t)
			t->next = t->next->next;
		else
			ft_putendl("There was nothing to delete");
	}
	return (2);
}
