/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaylor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 09:10:04 by jaylor            #+#    #+#             */
/*   Updated: 2017/05/05 18:30:32 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

typedef struct		s_print
{
	int				just;
	char			sign;
	char			*s;
	char			*eval;
	int				i;
	va_list			ap;
	int				spa;
	int				pad;
	int				hash;
	int				wid;
	int				prec;
	int				len;
	int				h;
	int				hh;
	int				lh;
	int				l;
	int				ll;
	int				z;
	int				j;
	char			spe;
	size_t			slen;
	intmax_t		ifree;
	int				ilen;
	int				*ret;
	uintmax_t		inofree;
	int				ifsign;
}					t_print;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

size_t				ft_strlen(const char *s);
void				ft_putstr(char const *s);
void				ft_putchar(char c);
void				ft_putnbr(intmax_t n);
uintmax_t			ft_atoi(const char *str);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strdup(const char *s1);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
char				*ft_strncat(char *s1, const char *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
char				*ft_strstr(const char *big, const char *little);
void				*ft_memset(void *b, int c, size_t len);
char				*ft_strsub(char *s, unsigned int start, size_t len);
char				*ft_strnstr(const char *big,
		const char *little, size_t len);
void				ft_strrev(char *s);
int					ft_intlen(intmax_t n);
char				*ft_itoa(int n);
intmax_t			ft_abs(intmax_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
char				*ft_strnew(size_t size);
void				ft_bzero(void *s, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strrchr(const char *s, int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *ne);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
char				*ft_strchr(const char *s, int c);
int					ft_count_words(char *s, char c);
char				*ft_trim_end(char *str);
char				*ft_strndup(const char *s1, size_t n);
char				*ft_strchrfull(const char *s, char *c);
int					ft_first(char *s, char c);
int					ft_putxchar(char c, int n, int *ret);
void				ft_abvpn(int n);
int					ft_unintlen(uintmax_t n);
void				ft_pfpchar(char c, int *ret);
char				*ft_allup(char *s);
int					ft_printf(char *format, ...);
int					strprint2(t_print *h);
int					parse(t_print *h);
int					parse2(t_print *h);
void				ft_unputnbr(uintmax_t n);
int					pfilter(t_print *h);
char				*checkhashpad(t_print *h);
char				*crazy(t_print *h);
int					wid(t_print *h);
int					hexwid(t_print *h);
void				clearstr(t_print *h);
int					ifmod(t_print *h);
int					ifhash(t_print *h);
char				*unitoaintmaxts(uintmax_t value, unsigned short base);
int					hexprint(t_print *h);
int					hexprint2(t_print *h);
int					hexprint3(t_print *h);
int					intprint(t_print *h);
int					intprint2(t_print *h);
int					intprint3(t_print *h);
int					justwid(t_print *h);
int					ifmod2(t_print *h);
int					justintprint(t_print *h);
int					justintprint4(t_print *h);
int					justintprint2(t_print *h);
int					justintprint3(t_print *h);
int					charprint(t_print *h);
int					ft_sort(t_print *h);
int					strprint(t_print *h);
int					get_next_line(int fd, char **line);
int					ft_print2d(char **array);
#endif
