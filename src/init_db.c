/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_db.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:24 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 20:41:47 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

t_db	*init_db(FILE *fp, int ac, char **av)
{
	t_db	*db;
	char	*tmp;
	char	*time;
	char	*event;
	char	*color;
	int		k;
	int		i;

	k = 1;
	if (!(db = ft_memalloc(sizeof(t_db))))
		return (NULL);
	while (get_next_line(fileno(fp), &tmp) > 0)
	{
		if (k-- == 1)
		{
			db->entry_count += 1;
		}
		else
		{
			time = ft_strndup(tmp, 25);
			tmp += 26;
			while (tmp[i] != 30)
				i++;
			event = ft_strndup(tmp, i);
			tmp += (i + 1);
			i = 0;
			while (tmp[i] != 30)
				i++;
			color = ft_strndup(tmp, i);
			if (db->ents == NULL)
				begin_list(db, time, event, color);
			else
				add_ent(db, db->entry_count, time, event, color);
			k = 1;
		}
	}
	AC = ac;
	AV = cp_av2db(ac, av);
	return (db);
}
