/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_query.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:46:59 by sjones            #+#    #+#             */
/*   Updated: 2017/06/15 22:58:36 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

void	check_query(t_db *db, int i)
{
	while (i < (AC - 1))
	{
		if (strcmp(AV[i], "help") == 0)
			i += help();
		else if (strcmp(AV[i], "print_all") == 0)
			i += print_all(db);
		else if (strcmp(AV[i], "print_today") == 0)
			i += print_today(db);
		else if (strcmp(AV[i], "print") == 0)
			i += print_ent(db, AV[i + 1]);
		else if (strcmp(AV[i], "export_all") == 0)
			i += export_all(db);
		else if (strcmp(AV[i], "export_ent") == 0)
			i += export_ent(db, AV[i + 1]);
		else if (strcmp(AV[i], "input_file") == 0)
			i += input_file(db);
		else
			i += i < (AC - 1) ? (1) : (0);
	}
}
