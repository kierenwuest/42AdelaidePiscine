/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:54:47 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/12 20:01:04 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	n;
	int	in;

	if (nb <= 2)
		return (2);
	else if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) && nb > 5)
		return (ft_find_next_prime(nb + 1));
	else if (nb == 4)
		return (5);
	else
	{
		n = 3;
		in = nb / 2;
		while (n <= in)
		{
			if (nb % n == 0 || nb % in == 0)
				return (ft_find_next_prime(nb + 1));
			n += 2;
			in -= 2;
		}
	}
	return (nb);
}
/*
#include <stdio.h>
int ft_is_prime(int nb)
{
	int	n;
	int	in;

	if (nb <= 1 || nb == 4)
		return (0);
	else if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) && nb > 5)
		return (0);
	n = 3;
	in = nb / 2;
	while (n <= in)
	{
		if (nb % n == 0 || nb % n == 0)
			return (0);
		n += 2;
		in -= 2;
	}
	return (1);
}

int main(void)
{
	int i = 1;

	while (i <= 200)
	{
		if (ft_is_prime(i) != 1)
			printf("For %d: Next Prime is: %d\n", i, ft_find_next_prime(i));
		i++;
	}
	return (0);
}*/
