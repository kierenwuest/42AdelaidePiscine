/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:05:17 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/08 17:34:49 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = (str[i] - 97) + 65;
		i++;
	}
	return (str);
}
/*
// 97  = a
// 122 = z
// 65 = A
// add offest a to A in count for range of alphabet
#include <stdio.h>
int	main(void)
{
	char arr1[10] = "ABCDdefg";
	char arr2[10] = "AbcDE456";

	printf("ori:  %s \n", arr1);
	printf("new: %s \n", ft_strupcase(arr1));

	printf("ori:  %s \n", arr2);
	printf("new: %s \n", ft_strupcase(arr2));
}
*/
