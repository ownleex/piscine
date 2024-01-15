/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:21:15 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/27 14:21:17 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

/*
int main()
{
	int *range;
	int min = 1, max = 5;
	int size = ft_ultimate_range(&range, min, max);
    	int i;
    	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			printf("%d ", range[i]);
			i++;
		}
	}
	else if (size == 0)
	{
		printf("Le tableau est nul car min >= max.\n");
	}
	else
	{
		printf("Erreur d'allocation mémoire.\n");
	}

	if (range != NULL)
	{
		free(range);
	}
 	return 0;
}
*/
