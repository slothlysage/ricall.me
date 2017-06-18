/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_today.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 15:53:00 by sjones            #+#    #+#             */
/*   Updated: 2017/06/17 19:31:46 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

t_ent	*get_time(t_ent *t, int start, int end)
{
	t_ent		*today;
	char		*date;
	time_t		ti; 
	struct tm	*tm;

	ti = time(NULL);
	tm = localtime(&ti);
	date = "";
	sprintf(date, "%d-%d-%dT%2d\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, start);
	while (t && ft_strncmp(t->start_date, date, 13) < 0)
		t = t->next;
	today = t;
	t = t->next;
	sprintf(date, "%d-%d-%dT%2d\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, end);
	while (t && ft_strncmp(t->start_date, date, 13) < 0)
	{
		while (today)
			today = today->next;
		today->next = t;
		t = t->next;
	}
	return (today);
}
