/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 14:49:57 by rmandica          #+#    #+#             */
/*   Updated: 2017/07/20 16:22:56 by rmandica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long i;
	long size;
	long temp;

	i = nb;
	size = 1;
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	size = i;
	while ((temp /= 10) > 0)
		size *= 10;
	while (size)
	{
		ft_putchar((char)((temp / size)) + 48);
		temp %= size;
		size /= 10;
	}
}
