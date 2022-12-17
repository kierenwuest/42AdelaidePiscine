/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:52:52 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/12 18:07:13 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power > 1)
	{
		n = ft_recursive_power(nb, power - 1);
		n = n * nb;
		nb--;
	}
	else
		n = nb;
	return (n);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i = 1;
	int p = 1;

	while (p < 10)
	{
		while (i < 10)
		{
			printf("%d^%d: %d\n", i, p, ft_recursive_power(i, p));
			i++;
		}
		i = 1;
		p++;
	}

	return (0);
}*/
