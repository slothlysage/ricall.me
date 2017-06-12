/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_ent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:46 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 19:43:32 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		export_ent(t_db *db, char *key)
{
	t_ent	*t;
	int		i;
	char	*tmp;
	FILE	*fp;

	printf("exporting %s now\n", key);
	t = DE;
	i = 0;
	tmp = key;
	fp = fopen(tmp, "w+");
	while (strcmp(t->key, key) != 0)
		t = t->next;
	if (t)
	{
		tmp = ft_strdup(t->data);
		while (tmp[i])
		{
			if (tmp[i] == 30)
				tmp[i] = '\n';
			i++;
		}
		fprintf(fp, "Key:%s\nData:\n%s", t->key, tmp);
	}
	else
		printf("There was no entry for %s\n", key);
	return (2);
}
