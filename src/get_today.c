/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_today.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 15:53:00 by sjones            #+#    #+#             */
/*   Updated: 2017/06/17 23:37:41 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

t_ent	*get_time(t_ent *t, int start, int end)
{
	t_ent		*today;
	t_ent		*head;
	char		date[2];

	ft_putendl("entering get time");
	today = NULL;
	sprintf(date, "%02d", start);
	ft_putendl(date);
	today = t;
	while (today->next && ft_strncmp(today->start_date + 11, date, 2) != 0)
		today = today->next;
	head = today;
	all_puts(head, stdout);
	sprintf(date, "%02d", end);
	ft_putendl(date);
	while (today->next && ft_strncmp(today->start_date + 11, date, 2) == 0)
		today = today->next;
	today = NULL;
	ft_putendl("Survived get time");
	return (head);
}

int		date_grab(char *time)
{
	char	tmp[8];

	sprintf(tmp, "%4s%2s%2s", time, time + 4, time + 2);
	fputs(tmp, stdout);
	return(ft_atoi(tmp));
}

t_ent	*get_today(t_ent *t)
{
	t_ent		*today;
	t_ent		*head;
	char		date[8];
	int			dn;
	time_t		ti; 
	struct tm	*tm;

	ft_putendl("entering get today");
	today = NULL;
	ti = time(NULL);
	tm = localtime(&ti);
	sprintf(date, "%d%02d%02d", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday);
	ft_putendl(date);
	dn = ft_atoi(date);
	today = t;
	all_puts(today, stdout);
	while (today->next != NULL && dn > date_grab(today->start_date))
	{
		all_puts(today, stdout);
		today = today->next;
	}
	head = today;
	all_puts(head, stdout);
	while (today->next && dn == date_grab(today->start_date))
		today = today->next;
	all_puts(today, stdout);
//	today = NULL;
//	today = head;
//	while (today)
//	{
//		all_puts(today, stdout);
//		if (today->next)
//			today = today->next;
//	}
	ft_putendl("Survived get today");
	return (head);
}
