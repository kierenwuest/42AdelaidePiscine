/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:58:44 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/13 19:05:58 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*parr;
	int	i;

	if (min >= max)
		return (0);
	parr = malloc((max - min) * sizeof(int));
	if (parr == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		parr[i] = min + i;
		i++;
	}
	return (parr);
}
/*
#include <stdio.h>

int main(void)
{
    int *p;
    int i;
	i = 0;
    p = ft_range(0, 20);
    while (i < 20)
    {
        printf("%d ", p[i]);
        i++;
    }   
    free(p);
}*/
