#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putdes(long n);
int	ft_puthex(unsigned int n, char x);
int	ft_put_unsigned_des(unsigned int n);
int ft_putadd(void *p);

#endif