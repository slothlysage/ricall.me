/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_today.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:45 by sjones            #+#    #+#             */
/*   Updated: 2017/06/18 15:38:17 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

char	*get_mes(t_ent *t)
{
	int		i;
	char	mes[2048];
	char	*ret;
	char	hour[2];

	i = 0;
	ft_putendl("Here in get_mes");
	if (t == NULL)
	{
		ft_putendl("no mes");
		return ("Nothing here\n");
	}
	ft_putendl("trying to make a message");
	while (t->next)
	{
		ft_putendl("1 get_mes loop");
		sprintf(hour, "%.2s", t->start_date + 11);
//		hour = ft_atoi(hour) > 12 ? ft_itoa(ft_atoi(hour) - 12) : hour;
		ft_putendl("2 get_mes loop");
		printf("%s and %s: are trying to be printed\n", t->title, hour);
		sprintf(mes, "you have to %s at %s o'clock, ", t->title, hour);
		printf("%s: is being created\n", mes);
		i++;
		if (t->next != NULL)
			t = t->next;
		ft_putendl("3 get_mes loop");
	}
	ft_putendl("after get_mes loop");
	sprintf(mes, (i > 1) ? "and" : "");
	sprintf(hour, "%.2s", t->start_date + 11);
//	hour = ft_atoi(hour) > 12 ? ft_itoa(ft_atoi(hour) - 12) : hour;
	ft_putendl("writing mes");
	sprintf(mes, "you have to %s at %s o'clock.\n", t->title, hour);
	ft_putendl(mes);
	ft_putendl("survived getting mes");
	ret = ft_strdup(mes);
	return (ret);
}

void	print_meds(FILE *fp, t_ent *morning, t_ent *afternoon, t_ent *evening)
{
	ft_putendl("Here in printing meds");
	fputs((morning == NULL) ? "0\n" : "1\n", fp);
	fputs((afternoon == NULL) ? "0\n" : "1\n", fp);
	fputs((evening == NULL) ? "0\n" : "1\n", fp);
	ft_putendl("getting messages in printing meds");
	fputs(get_mes(morning), fp);
	fputs(get_mes(afternoon), fp);
	fputs(get_mes(evening), fp);
	ft_putendl("survived printing meds");
}

int		print_today(t_db *db)
{
	t_ent	*all;
	t_ent	*today;
	t_ent	*morning;
	t_ent	*afternoon;
	t_ent	*evening;
	t_ent	*morning_meds;
	t_ent	*afternoon_meds;
	t_ent	*evening_meds;
	t_ent	*t;
//	t_ent	*next_event;
	FILE	*fp;

	ft_putendl("begin print today");
	fp = fopen("today.txt", "a+");
	all = DE;
	ft_putendl("now getting day");
	today = all == NULL ? NULL : get_today(all);
	t = today;
	while (t)
	{
		all_puts(t, stdout);
		t = t->next;
	}
	ft_putendl("now getting morning");
	morning = today == NULL ? NULL : get_time(today, 5, 12);
	all_puts(morning, stdout);
	ft_putendl("now getting afternoon");
	afternoon = today == NULL ? NULL : get_time(today, 12, 18);
	all_puts(afternoon, stdout);
	ft_putendl("now getting evening");
	evening = today == NULL ? NULL : get_time(today, 18, 23);
	all_puts(evening, stdout);
	ft_putendl("now getting meds");
	morning_meds = morning == NULL ? NULL : get_meds(morning);
	all_puts(morning_meds, stdout);
	afternoon_meds = afternoon == NULL ? NULL : get_meds(afternoon);
	all_puts(afternoon_meds, stdout);
	evening_meds = evening == NULL ? NULL : get_meds(evening);
	all_puts(evening_meds, stdout);
	ft_putendl("now printing meds");
	print_meds(fp, morning_meds, afternoon_meds, evening_meds);
	print_meds(fp, morning, afternoon, evening);
	ft_putendl("survived print today");
	return (1);
}
