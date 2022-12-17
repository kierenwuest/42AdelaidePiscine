/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:53:14 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/12 18:22:01 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		n = ft_fibonacci(index - 1);
		n = n + ft_fibonacci(index - 2);
	}
	return (n);
}
/*
#include <stdio.h>
int main(void)
{
	int i = 0;
	while (i < 19)
	{
		printf("%d: %d\n", i, ft_fibonacci(i));
		i++;
	}
}*/
