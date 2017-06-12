/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:46:53 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 15:46:55 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

void	begin_list(t_db *db, char *key, void *data)
{
	t_ent *t;

	if (!(DE = ft_memalloc(sizeof(t_ent))))
		return ;
	if (DE)
	{
		DE->key = key;
		DE->data = data;
		DE->next = NULL;
	}
}
