/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db_2file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:15 by sjones            #+#    #+#             */
/*   Updated: 2017/06/15 18:30:10 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

void	db_2file(t_db *db)
{
	FILE	*fp;
	t_ent	*t;

	fp = fopen("ricall.db", "w+");
	t = db->ents;

	fprintf(fp, "All %d events:\n", (int)db->entry_count);
	while (t)
	{
		all_puts(t, fp);
		all_puts(t, stdout);
		t = t->next;
	}
	fclose(fp);
}
