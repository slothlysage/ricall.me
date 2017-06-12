/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_db.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:24 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 20:34:07 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

t_db	*init_db(FILE *fp, int ac, char **av)
{
	t_db	*db;
	char	*tmp;
	char	*tmpk;
	char	*tmpd;
	int		k;

	k = 1;
	if (!(db = ft_memalloc(sizeof(t_db))))
		return (NULL);
	while (get_next_line(fileno(fp), &tmp) > 0)
	{
		if (k-- == 1)
			tmpk = ft_strdup(tmp);
		else
		{
			tmpd = ft_strdup(tmp);
			if (DE == NULL)
				begin_list(db, tmpk, tmpd);
			else
				add_ent(db, tmpk, tmpd);
			k = 1;
		}
	}
	AC = ac;
	AV = cp_av2db(ac, av);
	return (db);
}
