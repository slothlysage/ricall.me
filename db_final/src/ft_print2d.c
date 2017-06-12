/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:13 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 15:48:14 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		ft_print2d(char **array)
{
	char	**move;
	int		x;
	int		y;

	x = 0;
	y = 0;
	move = array;
	while (move[x])
	{
		y = 0;
		while (move[x][y])
		{
			if (move[x][y] == 'X')
				ft_putchar(move[x][y]);
			else
				ft_putchar(move[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
	return (0);
}
