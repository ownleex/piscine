/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:10:15 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/26 11:10:17 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		resultat = nb * resultat;
		i++;
	}
	return (resultat);
}
/*
int	main(void)
{
	printf("avec 5 puissance 2: %d\n", ft_iterative_power(5, 2));
	printf("avec 10 puissance 8 : %d\n", ft_iterative_power(10, 8));
	printf("avec 5 puissance -1 : %d\n", ft_iterative_power(5, -1));
	printf("avec 0 puissance 0 : %d\n", ft_iterative_power(0, 0));
	return (0);
}
*/
