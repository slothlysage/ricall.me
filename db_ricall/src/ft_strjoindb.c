/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoindb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:17 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 18:15:00 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

char	*ft_strjoindb(t_db *db, int i, int j, int k)
{
	char	*new;
	int		count;

	count = ft_atoi(AV[i]);
	i += 2;
	new = ft_strnew(ft_2dstrlen(&AV[i], count) + count);
	if (!new)
		return (NULL);
	while (count >= j)
	{
		while (*AV[i] != '\0')
		{
			*new = *AV[i];
			new++;
			(AV[i])++;
			k++;
		}
		*new++ = 30;
		k++;
		j++;
		i++;
	}
	new = new - k;
	return (new);
}
