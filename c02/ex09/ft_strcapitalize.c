/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:05:13 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/08/17 09:05:17 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = i - 1;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] >= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if (((str[j] == ' ') || (str[j] == '-') || (str[j] == '+')) 
			&& ((str[i] >= 'A' && str[i] <= 'Z') 
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			str[i] = str[i] - 32;
		}
		i++;
		j++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "+salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
*/
