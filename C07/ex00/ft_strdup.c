/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:47:24 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/15 13:08:34 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*parr;

	i = 0;
	while (src[i])
	{
		i++;
	}
	len = i;
	parr = (char *)malloc((len + 1) * sizeof(char));
	if (parr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		parr[i] = src[i];
		i++;
	}
	parr[i] = '\0';
	return (parr);
}

#include <string.h>
int main(void)
{
	char arr[] = "A string cannot tie itself";
	printf("%s\n", ft_strdup(arr));
	printf("%s\n", strdup(arr));
}
