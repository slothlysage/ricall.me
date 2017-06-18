/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_today.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 15:53:00 by sjones            #+#    #+#             */
/*   Updated: 2017/06/17 21:02:20 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

t_ent	*get_time(t_ent *t, int start, int end)
{
	t_ent		*today;
	t_ent		*head;
	char		date[256];
	time_t		ti; 
	struct tm	*tm;

	ft_putendl("entering get time");
	today = NULL;
	ti = time(NULL);
	tm = localtime(&ti);
	sprintf(date, "%d-%02d-%02dT%02d", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, start);
	ft_putendl(date);
	today = t;
	while (today->next && ft_strncmp(today->start_date, date, 13) < 0)
		today = today->next;
	head = today;
	today = today->next;
	sprintf(date, "%d-%02d-%02dT%02d", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, end);
	ft_putendl(date);
	while (today->next && ft_strncmp(today->start_date, date, 13) < 0)
		today = today->next;
	today = NULL;
	ft_putendl("Survived get time");
	return (head);
}
