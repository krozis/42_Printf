/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:21:31 by stelie            #+#    #+#             */
/*   Updated: 2022/02/08 18:28:56 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_nbrlen(long nb)
{
	size_t len;

	len = 0;
	if (nb < 10 && nb > -10)
		return (len + 1);
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char	*rev;
	int		i;

	if (!str)
		return (NULL);
	rev = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!rev)
		return (NULL);
	i = 0;
	while (str[i])
	{
		rev[ft_strlen(str) - i - 1] = str[i];
		i++;
	}
	rev[i] = '\0';
	str = rev;
	return (str);
}

char	*ft_itoa_pf(int i, char *str, int base)
{
	int		figure;
	int		isneg;

	if (i < 0)
	{
		isneg = 1;
		i *= -1;
	}
	while (i)
	{
		figure = i % base;
		if (figure > 9)
			*str = 'A' + figure - 10;
		else
			*str = '0' + figure;
		i = i / base;
		str++;
	}
	if (isneg)
		*str++ = '-';
	*str = '\0';
	return (ft_strrev(str));
}

t_bool	ft_incharset(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (TRUE);
		charset++;
	}
	return (FALSE);
}

t_bool	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (TRUE);
	return (FALSE);
}

int	ft_atoi(const char *str)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str && (*str < ':' && *str > '/'))
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * sign);
}

t_bool	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (TRUE);
	return (FALSE);
}

void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}

void    ft_putstr_fd(char *s, int fd)
{
        if (s)
        {
                while (*s != '\0')
                {
                        ft_putchar_fd(*s, fd);
                        s++;
                }
        }
}

void    ft_putnbr_fd(int n, int fd)
{
        if (n == -2147483648)
        {
                ft_putchar_fd('-', fd);
                ft_putstr_fd("214748364", fd);
                n = 8;
        }
        else if (n < 0)
        {
                ft_putchar_fd('-', fd);
                n = -n;
        }
        if (n < 10)
                ft_putchar_fd('0' + n, fd);
        else
        {
                ft_putnbr_fd(n / 10, fd);
                ft_putnbr_fd(n % 10, fd);
        }
}

int		ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int		ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
