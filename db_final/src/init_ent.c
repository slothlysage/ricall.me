/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ent.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:31 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 15:48:32 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

t_ent	*init_ent(char *key, void *data)
{
	t_ent	*ent;

	if (!(ent = (t_ent*)malloc(sizeof(t_ent))))
		return (NULL);
	if (ent)
	{
		ent->key = key;
		ent->data = data;
		ent->next = NULL;
	}
	return (ent);
}
