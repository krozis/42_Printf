/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:21:31 by stelie            #+#    #+#             */
/*   Updated: 2022/01/11 14:55:43 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

t_bool	ft_is_in