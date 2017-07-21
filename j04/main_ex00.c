/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 01:11:18 by rmandica          #+#    #+#             */
/*   Updated: 2017/07/18 18:41:03 by rmandica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int index);

int		main(void)
{
	int nb;

printf ("Veuillez entrer un nombre : ");
	scanf ("%d", &nb);
	printf("%d\n", ft_is_prime(nb));
	return (0);
}
