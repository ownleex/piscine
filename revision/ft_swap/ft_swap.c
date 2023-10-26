/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:53:17 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/30 11:53:19 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	nba;
	int	nbb;
	
	nba = 10;
	nbb = 20;
	printf("a = %d, b = %d\n", nba, nbb);
	ft_swap(&nba, &nbb);
	printf("a = %d, b = %d\n", nba, nbb);
	return (0);
}
