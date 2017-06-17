/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_today.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:45 by sjones            #+#    #+#             */
/*   Updated: 2017/06/17 15:50:50 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

t_ent	*get_meds(t_ent *t)
{
	t_ent	*meds;
	t_ent	*head;

	if (!t)
		return (NULL);
	while (t && t->categoryid != 1)
		t = t->next;
	meds = t;
	head = meds;
	while (meds)
	{
		if (meds->categoryid == 1)
		{
			all_puts(meds, stdout);
			while (meds->next)
			{
				if (meds->next->categoryid != 1)
					meds->next = meds->next->next;
			}
		}
		meds = meds->next;
	}
	return (head);
}

t_ent	*get_today(t_ent *t)
{
	t_ent		*today;
	char		*date;
	time_t		ti; 
	struct tm	*tm;

	ti = time(NULL);
	tm = localtime(&ti);
	date = "";
	sprintf(date, "%d-%d-%d\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday);
	while (t && ft_strncmp(t->start_date, date, 10) != 0)
		t = t->next;
	today = t;
	t = t->next;
	while (t && ft_strncmp(t->start_date, date, 10) == 0)
	{
		while (today)
			today = today->next;
		today->next = t;
		t = t->next;
	}
	return (today);
}

int		print_today(t_db *db)
{
	t_ent	*all;
	t_ent	*today;
//	t_ent	*all_meds;
//	t_ent	*today_meds;

	all = DE;
//	all_meds = get_meds(all);
	today = get_today(all);
//	today_meds = get_meds(today);
	return (1);
}
