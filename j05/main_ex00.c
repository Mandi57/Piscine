/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 01:11:18 by rmandica          #+#    #+#             */
/*   Updated: 2017/07/19 14:57:24 by rmandica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putnbr(int index);

int		main(void)
{
	int nb;

printf ("Veuillez entrer un nombre : ");
	scanf ("%d", &nb);
	printf("%d\n", ft_putnbr(nb));
	return (0);
}
