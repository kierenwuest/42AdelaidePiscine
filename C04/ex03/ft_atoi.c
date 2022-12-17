/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 06:31:14 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/17 17:08:42 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Helper function take the str and ptr to i from atoi, then return number(x)
// Loop to find char that is not whitespace
// after whitespce check for + or -
// if - decrease x
// else increase x
// return the integer  x
int	white_handler(char *str, int *ptr_i)
{
	int		x;
	int		i;

	i = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	x = 0;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			x++;
		i++;
	}
	*ptr_i = i;
	return (x);
}

//Convert char string of integer to integer value
//set polartiy of value to 1
//use whitespacehelper for whitespace the polarity check to set 1 or -1
//Loop i through str as long as str[i] is a digit
//Convert digit to int. * 10 and add next 1's digit, each loop of each col 10's
//* result by polarity for it sign and return the final value of result
int	ft_atoi(char *str)
{
	int		polarity;
	int		result;
	int		i;

	result = 0;
	polarity = 1;
	if (white_handler(str, &i) % 2)
		polarity = -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= polarity;
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	char	*nbr = "-2345\n";
	printf("Str:%s to Int: %d at mem address: %p\n", nbr, ft_atoi(nbr), &nbr);
	return (0);
}
*/
