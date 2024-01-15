/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:49:19 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/27 15:49:20 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_malloc_size(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	res = 1;
	if (size != 0)
	{
		i = 0;
		while (i < size)
		{
			res += ft_strlen(strs[i]);
			i++;
		}
		res += ft_strlen(sep) * (size - 1);
	}
	return (res);
}

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	char	*res;
	int		i;

	res = malloc(get_malloc_size(size, str, sep) * sizeof(char) + 1);
	if (res == NULL)
		return (NULL);
	if (size == 0)
		return (res);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, str[i]);
		if (i != size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}

/*
int main()
{
	char *strs[] = {"Hello", "les", "girls", "!"};
	char *sep = " ";
	char *result = ft_strjoin(4, strs, sep);
	if (result != NULL)
    {
		printf("voila le resultat : %s\n", result);
		free(result);
	}
	else
	{
		printf("Echec Malloc.\n");
	}
	return 0;
}*/
