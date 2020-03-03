/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:33:55 by stelie            #+#    #+#             */
/*   Updated: 2019/11/04 13:37:43 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
