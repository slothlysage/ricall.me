/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_db.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:48:04 by sjones            #+#    #+#             */
/*   Updated: 2017/06/17 21:56:05 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DB_H
# define FT_DB_H
# include <stdlib.h>
# include <stdio.h>
# include <strings.h>
# include <unistd.h>
# include <time.h>
# include "../libft/libft.h"
# define DE db->ents
# define AC db->ac
# define AV db->av

#define DB = ricall.me

typedef struct		s_ent
{
	char			*user_id;
	char			*event_id;
	char			*ricall_time;
	char			*leave_time;
	char			*start_date;
	char			*end_date;
	char			*location; 
	char			*current_address;
	char			*event_address;
	char			*title;
	char			*category;
	int				categoryid;
	int				urgency;
	int				reminded;
	int				confirmation;
	int				active;
	struct 			s_ent	*next;
}					t_ent;

typedef struct		s_db
{
	size_t			entry_count;
	int				ac;
	char			**av;
	t_ent			*ents;
}					t_db;

t_ent				*init_blank(void);
t_ent				*get_time(t_ent *t, int start, int end);
t_ent				*get_today(t_ent *t);
t_ent				*get_meds(t_ent *t);
int					input_file(t_db *db);
char				*next_in(char *line);
int					char_len(char *line);
int					addr_len(char *line);
t_db				*init_db(FILE *fp, int ac, char **av);
t_ent				*init_ent(char *line);
void				print_help(void);
void				print_err(void);
void				check_query(t_db *db, int i);
int					print_all(t_db *db);
int					print_today(t_db *db);
int					print_ent(t_db *db, char *event_id);
void				add_ent(t_db *db, char *line);
int					export_all(t_db *db);
int					export_ent(t_db *db, char *event_id);
void				db_2file(t_db *db);
void				all_puts(t_ent *ent, FILE *fp);
char				**cp_av2db(int ac, char **av);
int					ft_print2d(char **array);
char				*data_rm(char *s1, char *s2);
char				*ft_strjoindb(t_db *db, int i, int j, int k);
int					ft_2dstrlen(char **str, int num);
void				begin_list(t_db *db, char *line);
int					help(void);

#endif
