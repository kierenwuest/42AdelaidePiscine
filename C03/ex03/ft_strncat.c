/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 05:55:59 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/12 12:24:51 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x] && (x < nb))
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>
int	main(void)
{
	char	*dest, *src;
	int	nb;
	char	first[] = "Sha |";
	char	second[] = "| zam!";

	nb = 4;
	dest = first;
	src = second;
	
	printf("Result: %s\n", ft_strncat(dest, src, nb));

	return (0);
}
*/
