/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db_2file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:15 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 15:47:17 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

void	all_puts(t_ent *ent, FILE *fp)
{
	fputs(ent->key, fp);
	fputc('\n', fp);
	fputs(ent->data, fp);
	fputc('\n', fp);
}

void	db_2file(t_db *db)
{
	FILE	*fp;
	t_ent	*t;

	fp = fopen("derpbase.db", "w+");
	t = db->ents;
	while (t)
	{
		all_puts(t, fp);
		t = t->next;
	}
	fclose(fp);
}
