/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cp_av2db.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:47:05 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 15:47:11 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

char	**cp_av2db(int ac, char **av)
{
	char	**ret;
	int		i;

	i = 0;
	ret = malloc(sizeof(char*) * (ac + 1));
	ret[ac] = 0;
	while (++i < ac)
		ret[i - 1] = ft_strdup(av[i]);
	return (ret);
}
