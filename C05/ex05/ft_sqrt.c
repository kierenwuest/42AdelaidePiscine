/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:53:50 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/13 16:30:42 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	n;

	n = 1;
	if (nb == 0)
		return (0);
	while (nb > n * n)
		n++;
	if (nb == n * n)
		return (n);
	else
		return (0);
}

#include <stdio.h>

int ft_is_prime(int nb)
{
    int n;
    int in;

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

int main (void)
{
	int	i = 1;
	while (i <= 11211444)
	{
		if (ft_sqrt(i) != 0 && ft_is_prime(ft_sqrt(i)) == 1)
			printf("Square root %d: %d (Prime)\n", i, ft_sqrt(i));
		else if (ft_sqrt(i) != 0 && ft_is_prime(ft_sqrt(i)) == 0)
			printf("Square root %d: %d \n", i, ft_sqrt(i));
	i++;
	}
	return (0);
}
