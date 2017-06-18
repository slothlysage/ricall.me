/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_meds.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 15:54:55 by sjones            #+#    #+#             */
/*   Updated: 2017/06/17 20:43:36 by sjones           ###   ########.fr       */
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
	while (t && t->categoryid != 1)
		t = t->next;
	meds = t;
	head = meds;
	while (meds->next)
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
	ft_putendl("survived getting meds");
	return (head);
}
