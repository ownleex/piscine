/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:02:14 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/26 14:02:16 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
int	main(void)
{
	printf("le 5eme element de la suite est : %d\n", ft_fibonacci(5));
	printf("le 9eme element de la suite est : %d\n", ft_fibonacci(9));
	printf("le 30eme element de la suite est : %d\n", ft_fibonacci(30));
	printf("le 40eme element de la suite est : %d\n", ft_fibonacci(40));
	return (0);
}*/
