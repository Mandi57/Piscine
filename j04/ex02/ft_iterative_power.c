/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 15:53:18 by rmandica          #+#    #+#             */
/*   Updated: 2017/07/16 21:58:00 by rmandica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power)
	{
		res *= nb;
		power--;
	}
	return (res);
}
