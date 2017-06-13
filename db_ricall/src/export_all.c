/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:42 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 20:09:54 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		export_all(t_db *db)
{
	t_ent	*t;
	FILE	*fp;

	ft_putendl("\x1b[43mExporting evrything");
	fp = fopen("exported", "w+");
	fclose(fp);
	fp = fopen("exported", "a");
	t = DE;
	fprintf(fp, "Upcoming %d events:\n", (int)db->entry_count);
	while (t)
	{
		fprintf(fp, "%s - %s : %s\n", t->time, t->event, t->color);
		t = t->next;
	}
	return (1);
}
