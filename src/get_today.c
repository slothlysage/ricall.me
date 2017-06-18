/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_today.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 15:53:00 by sjones            #+#    #+#             */
/*   Updated: 2017/06/17 20:58:28 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

t_ent	*get_time(t_ent *t, int start, int end)
{
	t_ent		*today;
	char		date[256];
	time_t		ti; 
	struct tm	*tm;

	ft_putendl("entering get time");
	today = NULL;
	ti = time(NULL);
	tm = localtime(&ti);
	sprintf(date, "%d-%02d-%02dT%02d", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, start);
	ft_putendl(date);
	while (t->next && ft_strncmp(t->start_date, date, 13) < 0)
		t = t->next;
	today = t;
	t = t->next;
	sprintf(date, "%d-%02d-%02dT%02d", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, end);
	ft_putendl(date);
	while (t->next && ft_strncmp(t->start_date, date, 13) < 0)
		t = t->next;
	t = NULL;
	ft_putendl("Survived get time");
	return (today);
}
