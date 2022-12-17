/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:36:59 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/08 17:55:05 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	int	is_alphanumeric;

	is_alphanumeric = 0;
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
		is_alphanumeric = 1;
	return (is_alphanumeric);
}

char	upper_case(char c)
{
	if (c >= 97 && c <= 122)
		c = (c - 97) + 65;
	return (c);
}

char	*lower_case(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = (str[i] - 65) + 97;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = lower_case(str);
	i = 0;
	while (str[i])
	{
		if (i == 0)
			str[i] = upper_case(str[i]);
		else
		{
			if ((is_alphanumeric (str[i - 1])) == 0)
				str[i] = upper_case(str[i]);
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{	
	char arr1[] = "sALUt, comment tu vas ?";
	char arr2[] = " 42mots quarante-deux; cinquante+et+un";

	printf("ori:  %s", arr1);
	printf("%s \n", arr2);

	printf("new:  %s", ft_strcapitalize(arr1));
	printf("%s \n", ft_strcapitalize(arr2));
	return (0);
}
*/
