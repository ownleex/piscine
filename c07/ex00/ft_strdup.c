/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:48:38 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/26 19:48:41 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *) malloc(sizeof(char) * i + 1);
	if (dest != NULL)
	{
		i = 0;
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

/*
int	main(void)
{
	char depart[] = "ceci est un test";
	char *destination;
	destination = ft_strdup(depart);
	if (destination != NULL)
	{
		printf("chaine de depart : %s\n", depart);
		printf("chaine de destination : %s\n", destination);
	}
	else
		printf("echec Malloc\n");

	free(destination);
	return (0);
}
*/
