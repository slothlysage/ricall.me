/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:24 by sjones            #+#    #+#             */
/*   Updated: 2017/06/15 21:41:51 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

int		input_file(t_db *db)
{
	FILE	*fp;
	char	*tmp;
	char	*line;
	int		k;

	ft_putendl("am I here?1");
	fp = fopen("output_file.json", "r+");
	ft_putendl("am I here after I opened file?");
	k = 0;
    line = "";
    get_next_line(fileno(fp), &tmp);
	ft_putendl("am I here after a GNL?");
	ft_putendl(tmp);
	while (get_next_line(fileno(fp), &tmp) > 0)
	{
		ft_putendl("am I here loopin?");
		if (k % 17 == 1)
		{
			ft_putendl("hit an event loopin?");
            db->entry_count += 1;
		}
		else if (k % 17 == 0)
		{
			ft_putendl("last line loopin?");
			line = ft_strjoin(line, tmp);
			ft_putendl(line);
			add_ent(db, line);
			line = "";
		}
		else
		{
			ft_putendl("getting data loopin?");
			line = ft_strjoin(line, tmp);
		}
		k += 1;
	}
	fclose(fp);
	ft_putendl("I survived file input! :)");
	return (1);
}
