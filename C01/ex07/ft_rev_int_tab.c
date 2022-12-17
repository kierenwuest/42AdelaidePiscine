/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:57:02 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/06 21:07:00 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	nsize;
	int	placeholder;

	nsize = size -1;
	count = 0;
	while (count < size / 2)
	{
		placeholder = tab[count];
		tab[count] = tab[nsize];
		tab[nsize] = placeholder;
		count++;
		nsize--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	a[] = {1, 2, 3, 4, 5, 6};

	printf("ori array: %d%d%d%d%d%d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
	ft_rev_int_tab(&a[0], 6);
	printf("new array: %d%d%d%d%d%d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
	return (0);
}
*/
