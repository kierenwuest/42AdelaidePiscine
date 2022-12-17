/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:01:06 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/08 15:01:42 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(65 <= str[i] && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
    char arr1[14] = "CHARACTERS";
    char arr2[14] = "Characters123";
    char arr3[14] = "";

    int expect1;
    int expect2;
    int expect3;

    expect1 = ft_str_is_uppercase(arr1);
    expect2 = ft_str_is_uppercase(arr2);
    expect3 = ft_str_is_uppercase(arr3);

    printf("arr 1: Expects 1 ->  %d : %s \n", expect1, arr1);
    printf("arr 2: Expects 0 ->  %d : %s \n", expect2, arr2);
    printf("arr 3: Expects 1 ->  %d : %s \n", expect3, arr3);
}
*/
