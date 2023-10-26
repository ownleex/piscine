/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:40:46 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/30 16:40:48 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_numeric(char c)
{
	if (c >= '0' && c<= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (is_numeric(str[i]) == '\0')
			return (0) ;
		i++;
	}
	return (1);
}

int	main(void)
{
	char message[] = "5565";
	printf("%d", ft_str_is_numeric(message));
	return (0);
}
