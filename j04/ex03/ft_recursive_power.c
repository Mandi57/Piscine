/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 22:01:43 by rmandica          #+#    #+#             */
/*   Updated: 2017/07/20 15:00:50 by rmandica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (nb == 0)
		return (1);
	if (nb < 12 || nb > 0)
		return (0);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}
