/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_db.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:04 by sjones            #+#    #+#             */
/*   Updated: 2017/05/05 19:44:16 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DB_H
# define FT_DB_H
# include <stdlib.h>
# include <stdio.h>
# include <strings.h>
# include <unistd.h>
# include "libft.h"
# define DE db->ents
# define AC db->ac
# define AV db->av

typedef struct		s_ent
{
	char			*key;
	void			*data;
	struct s_ent	*next;
}					t_ent;

typedef struct		s_db
{
	size_t			entry_count;
	int				ac;
	char			**av;
	t_ent			*ents;
}					t_db;

t_db				*init_db(FILE *fp, int ac, char **av);
t_ent				*init_ent(char *key, void *data);
void				print_help(void);
void				print_err(void);
void				check_query(t_db *db, int i);
int					print_all(t_db *db);
int					print_ent(t_db *db, char *key);
void				print_color(char *s1, char *s2);
void				add_ent(t_db *db, char *key, char *data);
void				edit_ent(t_db *db, char *key, char *data);
void				delete_data(t_db *db, char *key, char *data);
int					delete_ent(t_db *db, char *key);
int					delete_all(t_db *db);
int					export_all(t_db *db);
int					export_ent(t_db *db, char *key);
void				db_2file(t_db *db);
void				all_puts(t_ent *ent, FILE *fp);
char				**cp_av2db(int ac, char **av);
int					ft_print2d(char **array);
char				*data_rm(char *s1, char *s2);
char				*ft_strjoindb(t_db *db, int i, int j, int k);
int					ft_2dstrlen(char **str, int num);
void				begin_list(t_db *db, char *key, void *data);
int					help(void);

#endif
