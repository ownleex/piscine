/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:41:43 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/29 16:41:44 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	signe;
	int	nombre;

	signe = 0;
	nombre = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			signe++;
		}
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		nombre = nombre * 10;
		nombre = nombre + *str - 48;
		++str;
	}
	if (signe % 2 == 0)
		return (nombre);
	return (-nombre);
}

/*
int	main(void)
{
	char	*str = "    ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
	return (0);	
}
*/
