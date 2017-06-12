/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:42 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 19:41:56 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		export_all(t_db *db)
{
	t_ent	*t;
	int		i;
	char	*tmp;
	FILE	*fp;

	ft_putendl("exporting evrything");
	fp = fopen("exported", "w+");
	fclose(fp);
	fp = fopen("exported", "a");
	t = DE;
	while (t)
	{
		tmp = ft_strdup(t->data);
		i = 0;
		while (tmp[i] != '\0')
		{
			if (tmp[i] == 30)
				tmp[i] = '\n';
			i++;
		}
		fprintf(fp, "Key:%s\nData:\n%s", t->key, tmp);
		fprintf(fp, "\n");
		t = t->next;
	}
	return (1);
}
