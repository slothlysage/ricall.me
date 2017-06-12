/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dstrlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:53 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 15:47:54 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		ft_2dstrlen(char **str, int num)
{
	int		i;
	char	**tmp;

	i = 0;
	tmp = str;
	while (num--)
	{
		i += ft_strlen(*tmp);
		tmp++;
	}
	return (i);
}
