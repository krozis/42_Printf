/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:06:53 by stelie            #+#    #+#             */
/*   Updated: 2020/02/10 13:06:54 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_power(long nb, int power)
{
	int i;
	int res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	res = 1;
	while (++i <= power)
		res = res * nb;
	return (res);
}
