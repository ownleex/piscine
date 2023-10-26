/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:49:07 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/26 13:49:09 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("avec 5 puissance 2: %d\n", ft_recursive_power(5, 2));
	printf("avec 10 puissance 8 : %d\n", ft_recursive_power(10, 8));
	printf("avec 5 puissance -1 : %d\n", ft_recursive_power(5, -1));
	printf("avec 0 puissance 0 : %d\n", ft_recursive_power(0, 0));
	return (0);
}*/
