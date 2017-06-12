/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_query.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:46:59 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 14:42:11 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		query_add_help(t_db *db, int i)
{
	char	*t;
	int		j;
	int		k;

	j = 1;
	k = 0;
	printf("adding to %s now\n", AV[i + 2]);
	t = ft_strjoindb(db, (i + 1), j, k);
	add_ent(db, AV[i + 2], t);
	i += (ft_atoi(AV[i + 1]) + 3);
	return (i);
}

int		query_edit_help(t_db *db, int i)
{
	char	*t;
	int		j;
	int		k;

	j = 1;
	k = 0;
	t = ft_strjoindb(db, (i + 1), j, k);
	edit_ent(db, AV[i + 2], t);
	i += (ft_atoi(AV[i + 1]) + 3);
	return (i);
}

int		query_del_help(t_db *db, int i)
{
	char	*t;
	int		j;
	int		k;

	j = 1;
	k = 0;
	t = ft_strjoindb(db, (i + 1), j, k);
	delete_data(db, AV[i + 2], t);
	i += (ft_atoi(AV[i + 1]) + 3);
	return (i);
}

void	check_query(t_db *db, int i)
{
	while (i < (AC - 1))
	{
		if (strcmp(AV[i], "help") == 0)
			i += help();
		else if (strcmp(AV[i], "print_all") == 0)
			i += print_all(db);
		else if (strcmp(AV[i], "print") == 0)
			i += print_ent(db, AV[i + 1]);
		else if (strcmp(AV[i], "add") == 0)
			i = query_add_help(db, i);
		else if (strcmp(AV[i], "export_all") == 0)
			i += export_all(db);
		else if (strcmp(AV[i], "export_ent") == 0)
			i += export_ent(db, AV[i + 1]);
		else if (strcmp(AV[i], "edit") == 0)
			i = query_edit_help(db, i);
		else if (strcmp(AV[i], "delete_data") == 0)
			i = query_del_help(db, i);
		else if (strcmp(AV[i], "delete_ent") == 0)
			i += delete_ent(db, AV[i + 1]);
		else if (strcmp(AV[i], "delete_all") == 0)
			i += delete_all(db);
		else
			i += i < (AC - 1) ? (1) : (0);
	}
	ft_putendl("got to the end of the commands");
}
