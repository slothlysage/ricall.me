/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:27 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 17:34:56 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		ft_test(char *s)
{
	if (*s != 30)
		return (1);
	return (0);
}

char	*data_rm(char *s1, char *s2)
{
	char	*t1;
	char	*t2;

	t1 = ft_strstr(s1, s2);
	while (ft_test(t1 + ft_strlen(s2)) == 1)
		t1 = ft_strstr(t1 + ft_strlen(s2), s2);
	if (t1 - s1 == 0)
		return (s1 + ft_strlen(s2) + 1);
	t2 = ft_strdup(ft_strchr(t1, 30));
	t1--;
	*t1 = '\0';
	return (ft_strjoin(s1, t2));
}

void	delete_data(t_db *db, char *key, char *data)
{
	t_ent	*t;
	char	**broken;

	printf("deleting data in %s now\n", key);
	t = DE;
	while (strcmp(t->key, key) != 0)
		t = t->next;
	if (t)
	{
		broken = ft_strsplit(data, 30);
		while (*broken)
		{
			t->data = data_rm(t->data, *broken);
			broken++;
		}
	}
	else
		printf("There was no %s to delete", key);
}
