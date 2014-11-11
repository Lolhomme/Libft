#ifndef	LIBFT_H
# define LIBFT_H

#include "libft.h"
#include <string.h>

void		ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		ft_memcpy(void *dst, const void *src, size_t n);
void		ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlen(const char *s);
char		*ft_strcpy(char *dst, const chr *src);
char		*ft_strncpy(char *dst, char *src, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str);
char		ft_strcat(char *s1, const char *s2);
char 		*ft_strdup(const char *s1);
char		*ft_strchr(const char *s, int c);
char 		*ft_strrchr(const char *s, int c);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t n);
char		*ft_strstr(const char *str, const char *to_find);
char		*ft_strnstr(const chsr *str, const char *to_find, size_t n);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_islower(int c);
int			ft_toupper(int c);
int			ft_isupper(int c);
int			ft_tolower(int c);
void		ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));

void		ft_putchar(char c);
void		ft_putstr(const char *s);
void		ft_putendl(const char *s);
void		ft_putnbr(int nb);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(const char *s, int fd);
void		ft_putendl_fd(const char *s, int fd);
void		ft_putnbr_fd(int nb, int fd);

#endif
