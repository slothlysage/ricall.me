/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:45 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 19:46:49 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		print_all(t_db *db)
{
	t_ent	*t;
	int		j;
	char	*tmp;

	ft_putendl("printing everything");
	t = DE;
	while (t)
	{
		tmp = ft_strdup(t->data);
		j = 0;
		while (tmp[j] != '\0')
		{
			if (tmp[j] == 30)
				tmp[j] = '\n';
			j++;
		}
		print_color(t->key, tmp);
		ft_putchar('\n');
		t = t->next;
	}
	return (1);
}
