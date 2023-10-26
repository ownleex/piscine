/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:39:38 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/31 16:39:41 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	f_atoi(char *str)
{
	int	resultat;
	int	signe;
	int	i;
	
	resultat = 0;
	signe = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		resultat = resultat * 10 + str[i] - '0';
		i++;
	}
	return (resultat * signe);	
}

int	main(void)
{
	printf("%d", f_atoi("    -44575dgs"));
	return (0);
}
