/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_meds.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 15:54:55 by sjones            #+#    #+#             */
/*   Updated: 2017/06/18 20:43:45 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

t_ent	*get_meds(t_ent *t)
{
	t_ent	*meds;
	t_ent	*head;

	ft_putendl("entering get_meds");
	if (!t)
		return (NULL);
	ft_putendl("get_meds1");
	while (t && t->categoryid != 1)
		t = t->next;
	ft_putendl("get_meds2");
	meds = t;
	head = !meds ? NULL : meds;
	all_puts(head, stdout);
	ft_putendl("get_meds3");
	while (meds && meds->categoryid == 1)
	{
		ft_putendl("get_meds loop 1");
		if (meds->categoryid == 1)
		{
			ft_putendl("get_meds loop 2");
			all_puts(meds, stdout);
			if (meds->next && meds->next->categoryid != 1)
				meds->next = meds->next->next;
		}
		if (meds->next)
			meds = meds->next;
		ft_putendl("get_meds");
	}
	ft_putendl("survived looping get_meds");
	ft_putendl("survived getting meds");
	return (head);
}
