/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:25:13 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/26 10:25:14 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("avec 5 : %d\n", ft_iterative_factorial(5));
	printf("avec 0 : %d\n", ft_iterative_factorial(0));
	printf("avec -1 : %d\n", ft_iterative_factorial(-1));
	return (0);
}
*/
