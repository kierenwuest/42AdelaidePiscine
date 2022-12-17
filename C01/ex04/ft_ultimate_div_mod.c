/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:00:15 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/06 20:40:59 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	the;

	the = *a;
	*a = *a / *b;
	*b = the % *b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 415;
	b = 10;
	printf("a: %d, b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a div b = %d; a mod b = %d\n", a, b);
	return (0);
}
*/
