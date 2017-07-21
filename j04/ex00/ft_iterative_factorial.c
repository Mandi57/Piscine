/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 09:33:39 by rmandica          #+#    #+#             */
/*   Updated: 2017/07/15 19:41:11 by rmandica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int x;
	int res;

	x = 1;
	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (x <= nb)
	{
		res = x * res;
		x++;
	}
	return (res);
}
