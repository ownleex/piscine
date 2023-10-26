/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:38:40 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/14 17:38:43 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	main(void)
{
	int nbra = 146;
	int nbrb = 243;
	
		
	printf("avant : a = %d et b = %d\n", nbra, nbrb);
	ft_swap(&nbra, &nbrb);
	printf("avant : a = %d et b = %d\n", nbra, nbrb);
	
	
	return(0);	
}