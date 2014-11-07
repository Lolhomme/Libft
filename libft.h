#ifndef	LIBFT_H
# define LIBFT_H

#include "libft.h"
#include <string.h>

size_t		ft_strlen(const char *s);
char		*ft_strcpy(char *dst, const chr *src);
char		*ft_strncpy(char *dst, char *src, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
char		ft_strcat(char *s1, const char *s2);
char 		*ft_strdup(const char *s1);
char		*ft_strchr(const char *s, int c);
char 		*ft_strrchr(const char *s, int c);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t n);
char		*ft_strstr(const char *str, const char *to_find);

#endif
