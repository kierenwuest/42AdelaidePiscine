/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 08:28:20 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/12 16:49:33 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	f = nb;
	nb--;
	while (nb > 1)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb;

	nb = -12;
	while (nb <= 12)
	{
		printf("Factorial %d: %d\n", nb, ft_iterative_factorial(nb));
		nb++;
	}
	return(0);
}
*/
