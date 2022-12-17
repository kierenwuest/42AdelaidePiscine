/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:52:26 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/12 17:29:37 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	n = nb;
	power--;
	while (power > 0)
	{
		n = n * nb;
		power--;
	}
	return (n);
}
/*
#include <stdio.h>
int main()
{
	int	i = 1;
	int p = 1;
	while (p < 10)
	{
		while (i < 10)
		{
			printf("%d^%d: %d\n", i, p, ft_iterative_power(i, p));
			i++;
		}
		i = 1;
		p++;
	}
	return (0);
}*/
