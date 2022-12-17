/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:06:52 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/14 22:31:33 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	totalsize(int size, char **strs, char *sep)
{
	int	len;
	int	i;
	int	n;

	n = 0;
	len = 0;
	while (n < size)
	{
		i = 0;
		while (strs[n][i])
			i++;
		len = len + i;
		n++;
	}
	i = 0;
	while (sep[i])
		i++;
	len = len + (i * (size - 1));
	return (len);
}

int	ft_concat(char **dest, char *src, int b)
{
	int	i;

	i = 0;
	while (src[i])
	{
		(*dest)[b] = src[i];
		i++;
		b++;
	}
	return (b);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		n;
	int		b;

	if (size == 0)
		return (malloc(1));
	s = malloc((totalsize(size, strs, sep) + 1) * sizeof(char));
	if (s == 0)
		return (0);
	n = 0;
	b = 0;
	while (n < size)
	{
		b = ft_concat(&s, strs[n], b);
		if (n == (size - 1))
			break ;
		b = ft_concat(&s, sep, b);
		n++;
	}
	s[b] = '\0';
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char *text[10];
	text[0] = "Once";
	text[1] = "upon";
	text[2] = "a";
	text[3] = "ft_strjoin";
	text[4] = "!*STORYLINE*!";
	text[5] = "and they";
	text[6] = "all";
	text[7] = "\' - \'";
	text[8] = "lived happily";
	text[9] = "ever after.";
	printf("%s\n", ft_strjoin(10, text, " | "));
}
*/
