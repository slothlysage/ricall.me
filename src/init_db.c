/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_db.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:24 by sjones            #+#    #+#             */
/*   Updated: 2017/06/15 19:30:38 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

t_db	*init_db(FILE *fp, int ac, char **av)
{
	t_db	*db;
	char	*tmp;
	char	*line;
	int		k;

	if (!(db = ft_memalloc(sizeof(t_db))))
		return (NULL);
	k = 1;
    line = "";
	db->ents = NULL;
    get_next_line(fileno(fp), &tmp);
	while (get_next_line(fileno(fp), &tmp) > 0)
	{
		if (k % 17 == 1)
            db->entry_count += 1;
		else if (k % 17 == 0)
		{
			line = ft_strjoin(line, tmp);
			add_ent(db, line);
			line = "";
		}
		else
			line = ft_strjoin(line, tmp);
		k += 1;
	}
	AC = ac;
	AV = cp_av2db(ac, av);
	return (db);
}
