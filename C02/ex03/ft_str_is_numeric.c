/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:07:52 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/08 16:02:32 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(48 <= str[i] && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char arr1[14] = "0123456789";
	char arr2[14] = "Characters123";
	char arr3[14] = "";

	int expect1;
	int expect2;
	int expect3;
	
	expect1 = ft_str_is_numeric(arr1);
	expect2 = ft_str_is_numeric(arr2);
	expect3 = ft_str_is_numeric(arr3);

	printf("arr 1: Expects 1 ->  %d : %s \n", expect1, arr1);
	printf("arr 2: Expects 0 ->  %d : %s \n", expect2, arr2);
	printf("arr 3: Expects 1 ->  %d : %s \n", expect3, arr3);
}
*/
