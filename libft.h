#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	sc(char *s, int *i);
void	ft_bzero(void *s, size_t n);
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memset(void *b, int c, size_t len);
void    ft_putchar_fd(char c, int fd);
void    ft_putchar(char c);
void    ft_putnbr_fd(int n, int fd);
void    ft_putnbr(int n);
char    *ft_strcat(char *s1, const char *s2);
int     ft_strcmp(char *s1, char *s2);
char    *ft_strcpy(char *dst, char *src);
int		ft_strlen(const char *s);
int     ft_tolower(int c);
int	    ft_toupper(int c);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);





// void *      ft_memalloc(size_t size);
// void        ft_memdel(void **ap);
// char *      ft_strnew(size_t size);
// void        ft_strdel(char **as);
// void        ft_strclr(char *s);
// void        ft_striter(char *s, void (*f)(char *));
// void        ft_striteri(char *s, void(*f)(unsigned int, char *));
// char *      ft_strmap(char const *s, char (*f)(char));
// char *      ft_strmapi(char const *s, char(*f)(unsigned int, char));
// int         ft_strequ(char const *s1, char const *s2);
// int         ft_strnequ(char const *s1, char const *s2, size_t n);
// int         ft_strsub(char*  const *s, unsigned int start, size_t len);
// char *      ft_strjoin(char const *s1, char const *s2);
// char *      ft_strtrim(char const *s);
// char **     ft_strsplit(char const *s, char c);
// char *      ft_itoa(int n);
// void        ft_putchar(char c);
// void        ft_putstr(char const *s);
// void        ft_putendl(char const *s);
// void        ft_putnbr(int n);
// void        ft_putchar(int n);
// void        ft_putstr_fd(char const *s, int fd);
// void        ft_putnbr_fd(int n, int fd);


#endif