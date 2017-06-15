/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db_2file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:15 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 20:23:16 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

void	all_puts(t_ent *ent, FILE *fp)
{
	fputs(ft_itoa(ent->num), fp);
	fputc('\n', fp);
	fputs(ent->time, fp);
	fputc(30, fp);
	fputs(ent->event, fp);
	fputc(30, fp);
	fputs(ent->color, fp);
	fputc(30, fp);
	fputc('\n', fp);
}

void	db_2file(t_db *db)
{
	FILE	*fp;
	t_ent	*t;

	fp = fopen("ricall.db", "w+");
	t = db->ents;
	while (t)
	{
		all_puts(t, fp);
		t = t->next;
	}
	fclose(fp);
}
