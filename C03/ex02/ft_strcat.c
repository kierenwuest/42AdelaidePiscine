/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:40:13 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/12 12:18:54 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x])
	{
	dest[i] = src[x];
	i++;
	x++;
	}
	dest[i] = '\0';
	return (dest);
}

#include<stdio.h>
int	main(void)
{
	char	*dest, *src;

	char	first[] = "Sha |";
	char	second[] = "| zam!";

	dest = first;
	src = second;

	printf("%s\n", ft_strcat(dest, src));
	return (0);
}
*/
