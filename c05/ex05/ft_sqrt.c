/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:32:57 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/26 14:33:00 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 2147395600)
		return (46340);
	if (nb > 2147395600)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*
int	main(void)
{
	printf("la racine carre de 5 est : %d\n", ft_sqrt(5));
	printf("la racine carre de 25 est : %d\n", ft_sqrt(25));
	printf("la racine carre de 49 est : %d\n", ft_sqrt(49));
	printf("la racine carre de 81 est : %d\n", ft_sqrt(81));
	printf("la racine carre de 2147395601 est : %d\n", ft_sqrt(2147395601));
	printf("la racine carre de 2147395600 est : %d\n", ft_sqrt(2147395600));
}
*/
