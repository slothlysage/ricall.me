/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_today.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:45 by sjones            #+#    #+#             */
/*   Updated: 2017/06/17 18:31:40 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

int		print_today(t_db *db)
{
	t_ent	*all;
	t_ent	*today;
	t_ent	*all_meds;
	t_ent	*today_meds;

	all = DE;
	today = DE;
	all_meds = DE;
	today_meds = DE;
	all_meds = get_meds(all);
	today = get_today(all);
	today_meds = get_meds(today);
//	all_puts(DE, stdout);
	return (1);
}
