/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:42 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 18:57:06 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		export_all(t_db *db)
{
	t_ent	*t;
	int		i;
	char	*tmp;
	char	*event;
	FILE	*fp;

	ft_putendl("\x1b[43mExporting evrything");
	fp = fopen("exported", "w+");
	fclose(fp);
	fp = fopen("exported", "a");
	t = DE;
	fprintf(fp, "Upcoming %d events:\n", (int)db->entry_count);
	while (t)
	{
		tmp = ft_strdup(t->data);
		i = 0;
		while (tmp[i] != 30)
			i++;
		event = strndup(tmp, i);
		tmp += (i + 1);
		fprintf(fp, "%s - %s : %s\n", t->key, event, tmp);
		t = t->next;
	}
	return (1);
}
