/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:37:08 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/17 18:28:09 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//recursive function for int nbr, a char array base, and an int size.
//If nbr is -, write a '-' char and sets the unsigned int n to the abs of nbr.
//Otherwise sets n to nbr.
//Checks if n >= size. If true: recurse on (n / size), base and size.
//This recursion continues until n < size.
//Write the char a at index n % size in base
void	ft_putnbr_base_rec(int nbr, char *base, int size)
{
	unsigned char	a;
	unsigned int	n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_putnbr_base_rec(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

//Take array base and return 1 if the array is a valid base for ints or 0.
//Do this by iterating through base and check conditions:
// contains '+' or '-'.
// 2 chars in a row are equal.
// length of 1 or less.
// If conditions true = 0 or false = 1.
int	ft_ver_bas(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

// Takes int nbr, base array and write the base-size of nbr.
// ft_ver_bas with base as an arg to verify that base is valid. 
// If ft_ver_bas = 1, ft_putnbr_base = length of base by counting chars.
// Then ft_putnbr_base_rec with nbr, base, and the length of base as arguments.
void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (ft_ver_bas(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		ft_putnbr_base_rec(nbr, base, s);
	}
}
/*
#include <stdio.h>
//create some base systems and put them through the functions with -42 to 42
//because why not
int main()
{
	int nbr = -42;
    char bin[] = "01";
    char dec[] = "0123456789";
    char hex[] = "0123456789ABCDEF";
    char oct[] = "poneyif";

	while (nbr < 42)
	{
		ft_putnbr_base(nbr, bin);
		printf(" = Binary of %d: ", nbr);
		printf("\n");
		nbr++;
	}
	nbr = -42;
	printf("\n");

	while (nbr < 42)
	{
		ft_putnbr_base(nbr, dec); 
		printf(" = Decimal of %d: ", nbr);
		printf("\n");
		nbr++;
	}
	nbr = -42;
	printf("\n");

	while (nbr < 42)
	{
		ft_putnbr_base(nbr, hex);
		printf(" = Hexidecimal of %d: ", nbr);
		printf("\n");
		nbr++;
	}
	nbr = -42;
	printf("\n");

	while (nbr < 42)
	{
		ft_putnbr_base(nbr, oct);
		printf(" = Octal of %d: ", nbr);
		printf("\n");
		nbr++;
	}
    return (0);
}
*/
