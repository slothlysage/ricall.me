/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_today.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 15:53:00 by sjones            #+#    #+#             */
/*   Updated: 2017/06/17 20:33:32 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

t_ent	*get_time(t_ent *t, int start, int end)
{
	t_ent		*today;
	char		date[256];
	time_t		ti; 
	struct tm	*tm;

	ft_putendl("begin get time");
	today = NULL;
	ti = time(NULL);
	tm = localtime(&ti);
	ft_putendl("get time 2");
	sprintf(date, "%d-%d-%dT%2d\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, start);
	ft_putendl("get time 3");
	while (t->next && ft_strncmp(t->start_date, date, 13) < 0)
		t = t->next;
	ft_putendl("get time 4");
	today = t;
	t = t->next;
	sprintf(date, "%d-%d-%dT%2d\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, end);
	while (t->next && ft_strncmp(t->start_date, date, 13) < 0)
	{
		while (today)
			today = today->next;
		today->next = t;
		t = t->next;
	}
	ft_putendl("survived getting time");
	return (today);
}
