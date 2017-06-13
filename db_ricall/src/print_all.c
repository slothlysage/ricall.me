/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:45 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 18:41:27 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		print_all(t_db *db)
{
	t_ent	*t;
	int		j;
	int		n;
	char	*tmp;
	char	*event;

	ft_putendl("\x1b[43mUpcoming Events\x1b[0m");
	t = DE;
	while (t)
	{
		tmp = ft_strdup(t->data);
		j = 0;
		while (tmp[j] != 30)
			j++;
		event = ft_strndup(tmp, j);
		tmp += (j + 1);
		print_color(t->key, event, tmp);
		t = t->next;
	}
	return (1);
}
