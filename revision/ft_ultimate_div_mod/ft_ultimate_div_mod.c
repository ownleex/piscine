/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:58:47 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/30 14:58:50 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	
	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

int	main(void)
{
	int	a;
	int	b;
	
	a = 17;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("le resultat est %d, le modulo est %d", a, b);
	return (0);
}
