/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:45:56 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/08 17:35:45 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
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
/*
// 97  = a
// 122 = z
// 65 = A
// 90 = Z
// add offest a to A in count for range of alphabet
#include <stdio.h>
int	main(void)
{
	char arr1[10] = "ABCDdefg";
	char arr2[10] = "AbcDE456";

	printf("ori:  %s \n", arr1);
	printf("new: %s \n", ft_strlowcase(arr1));

	printf("ori:  %s \n", arr2);
	printf("new: %s \n", ft_strlowcase(arr2));
}
*/
