/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_ent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:46 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 20:10:32 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

int		export_ent(t_db *db, int num)
{
	t_ent	*t;
	FILE	*fp;

	printf("exporting %d now\n", num);
	t = DE;
	fp = fopen(t->time, "w+");
	while (t->num != num)
		t = t->next;
	if (t)
	{
		fprintf(fp, "%s - %s : %s", t->time, t->event, t->color);
	}
	else
		printf("There was no entry for %d\n", num);
	return (2);
}
