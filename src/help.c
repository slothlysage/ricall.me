/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 18:34:18 by sjones            #+#    #+#             */
/*   Updated: 2017/06/12 20:30:59 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_db.h"

int		help(void)
{
	ft_putendl("\x1b[43mThe commands are as follows:\x1b[0m");
	ft_putendl("\x1b[45mhelp\x1b[0m");
	ft_putendl("\x1b[45mprint_all\x1b[0m");
	ft_putendl("\x1b[45mprint \x1b[46mnum\x1b[0m");
	ft_putendl("\x1b[45mexport_all\x1b[0m");
	ft_putendl("\x1b[45mexport_ent \x1b[46mnum\x1b[0m");
	return (1);
}
