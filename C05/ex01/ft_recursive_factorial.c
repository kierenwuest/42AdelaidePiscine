/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:50:49 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/12 17:14:45 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 2)
	{
		n = ft_recursive_factorial(nb - 1);
		n = n * nb;
		nb--;
	}
	else
		n = nb;
	return (n);
}
/*
#include <stdio.h>
int main(void)
{
	int i = -1;
	//int x = 0;

	while (i < 14)
	{
		printf("%d: %d\n", i, ft_recursive_factorial(i));
		i++;
	}
	return (0);
}*/
