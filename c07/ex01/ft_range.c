/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:07:20 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/27 11:07:22 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	ret = malloc((max - min) * sizeof(int));
	if (ret == NULL)
		return (NULL);
	while (i < max - min)
	{
		ret[i] = min + i;
		i++;
	}
	return (ret);
}

/*
int main(void)
{
	int min = -34;
	int max = 100;
	int *range = ft_range(min, max);

	if (range == NULL)
	{
		printf("Erreur\n");
		return (1);
	}
	int i = 0;
	while (i < max - min)
	{
		printf("range[%d] = %d\n", i, range[i]);
		i++;
	}
	free(range);
	return (0);
}
*/
