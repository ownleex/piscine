/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:43:27 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/15 10:43:30 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	resultat;
	int	reste;

	a = 17;
	b = 5;
	ft_div_mod(a, b, &resultat, &reste);
	printf("le resultat esr %d, le reste est %d", resultat, reste);
	return (0);
}
*/
