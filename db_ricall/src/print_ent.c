/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ent.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:52 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 19:39:23 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		print_ent(t_db *db, char *key)
{
	t_ent	*t;
	int		i;
	char	*tmp;

	printf("printing %s now\n", key);
	t = db->ents;
	while (t && ft_strcmp(t->key, key) != 0)
		t = t->next;
	if (t)
	{
		tmp = ft_strdup(t->data);
		i = 0;
		while (tmp[i] != '\0')
		{
			if (tmp[i] == 30)
				tmp[i] = '\n';
			i++;
		}
		print_color(t->key, tmp);
	}
	else
		printf("There was no entry for %s\n", key);
	return (2);
}
