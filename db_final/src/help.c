/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 18:34:18 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 22:12:46 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_db.h"

int		help(void)
{
	ft_putendl("The commands are as follows:");
	ft_putendl("help");
	ft_putendl("exit");
	ft_putendl("print_all");
	ft_putendl("print");
	ft_putendl("add");
	ft_putendl("edit");
	ft_putendl("delete_all");
	ft_putendl("delete_ent");
	ft_putendl("delete_data");
	ft_putendl("export_all");
	ft_putendl("export_ent");
	return (1);
}
