#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <unistd.h>

typedef enum	e_bool
{
	FALSE,
	TRUE
}				t_bool;

size_t	ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_bzero(void *s, size_t n);
t_bool	ft_in_charset(char *charset, char c);
t_bool	ft_isdigit(int c);
int		ft_mini_atoi(const char *str);

#endif