/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:38 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 14:29:59 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		main(int ac, char **av)
{
	t_db	*db;
	FILE	*fp;

	fp = fopen("derpbase.db", "r+");
	db = init_db(fp, ac, av);
	AC = ac;
	fclose(fp);
	if (ac == 1)
		printf("%s\n", "use -help for help");
	else
	{
		check_query(db, 0);
		db_2file(db);
	}
	return (0);
}
