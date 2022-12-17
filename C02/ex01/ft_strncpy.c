/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:02:40 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/08 21:18:24 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			break ;
		}
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[27];
	char *ptr;
	unsigned int size = 25;

	//ptr = strncpy(dest, "what a great ol string", size);
	//printf("strncpy : %s  size: %d\n", dest, size);
	ptr = ft_strncpy(dest, "what a great ol string", size);
	printf("ft_strncpy: %s  size: %d\n", dest, size);
return (0);
}*/
