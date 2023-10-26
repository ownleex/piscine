/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:17:04 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/15 09:17:08 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	e;
	int	f;

	e = *a / *b;
	f = *a % *b;
	*a = e;
	*b = f;
}

/*
int	main(void)
{
	int	c;
	int	d;

	c = 17;
	d = 5;
	ft_ultimate_div_mod(&c, &d);
	printf("le resultat est %d, le reste est %d", c, d);
	return (0);
}
*/
