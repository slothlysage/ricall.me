/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_today.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:45 by sjones            #+#    #+#             */
/*   Updated: 2017/06/18 13:40:02 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

char	*get_mes(t_ent *t)
{
	int		i;
	char	*mes;
	char	*time;

	i = 0;
	mes = "";
	while (t->next)
	{
		time = t->start_date + 11;
		time = ft_atoi(time) > 12 ? ft_itoa(ft_atoi(time) - 12) : time;
		sprintf(mes, "you have to %s at %s, ", t->title, time);
		i++;
		t = t->next;
	}
	sprintf(mes, (i > 1) ? "and" : "");
	time = t->start_date + 11;
	time = ft_atoi(time) > 12 ? ft_itoa(ft_atoi(time) - 12) : time;
	sprintf(mes, "you have to %s at %s.", t->title, time);
	return (mes);
}


void	print_meds(FILE *fp, t_ent *morning, t_ent *afternoon, t_ent *evening)
{
	fputs((morning == NULL) ? "0" : "1", fp);
	fputs((afternoon == NULL) ? "0" : "1", fp);
	fputs((evening == NULL) ? "0" : "1", fp);
	fputs((morning == NULL) ? "No morning medication" : get_mes(morning), fp);
	fputs((afternoon == NULL) ? "Medication free afternoon" : get_mes(afternoon), fp);
	fputs((evening == NULL) ? "Evening without medication" : get_mes(evening), fp);
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
//	t_ent	*next_event;
	FILE	*fp;

	ft_putendl("begin print today");
	fp = fopen("today", "w+");
	all = DE;
	ft_putendl("now getting day");
	today = all == NULL ? NULL : get_today(all);
	all_puts(today, stdout);
	ft_putendl("now getting thirds");
	morning = today == NULL ? NULL : get_time(today, 5, 12);
	all_puts(morning, stdout);
	afternoon = today == NULL ? NULL : get_time(today, 12, 18);
	all_puts(afternoon, stdout);
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



	fputs(!morning ? "0" : "1", fp);
	fputs(!afternoon ? "0" : "1", fp);
	fputs(!evening ? "0" : "1", fp);

	//	all_puts(DE, stdout);
	ft_putendl("survived print today");
	return (1);
}
