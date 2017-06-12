/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 18:15:59 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 23:28:07 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		delete_all(t_db *db)
{
	FILE	*fp;

	ft_putendl("deleting everything");
	fp = fopen("derpbase.db", "wb+");
	fputc('\n', fp);
	fputc('\n', fp);
	exit (1);
	return (1);
}
