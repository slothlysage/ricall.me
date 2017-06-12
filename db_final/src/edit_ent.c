/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edit_ent.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:38 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 17:34:17 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

void	edit_ent(t_db *db, char *key, char *data)
{
	t_ent	*t;
	char	*str;

	printf("editing %s now\n", key);
	t = DE;
	while (t && ft_strcmp(t->key, key) != 0)
		t = t->next;
	if (t)
	{
		str = strdup(t->data);
		t->data = ft_strjoin(str, data);
	}
	else
		printf("There was no entry for %s\n", key);
}
