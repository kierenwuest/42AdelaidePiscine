/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 05:56:49 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/12 12:49:23 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_found(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s2[i] != s1[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (*str)
	{
		if (to_find[i] == *str)
		{
			if (is_found(str, &to_find[i]) == 1)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char	*str1 = "Check the rhyme";
	char	*str2 = "the";
	char	*ptr1;
	char	*ptr2;

	ptr1 = ft_strstr(str1, str2);
	ptr2 = strstr(str1, str2);

	printf("Find match from '%s' in '%s'\n", str2, str1); 
	printf("strstr   : %s\n", ptr1);
	printf("ft_strstr: %s\n", ptr2);

	return (0);
}*/
