/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:22:48 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/20 14:22:51 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			j++;
		}
		i++;	
	}
	
}

/*
int	main(void)
{
	char	str[255] = "ceci est un test";
	char	to_find[255] = "est";
	
	printf("%s\n", strstr(str, to_find));
	return (0);	
}
*/
