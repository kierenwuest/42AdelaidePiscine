/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:32:34 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/12 11:49:10 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && (s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *s1 ,*s2 ,*s3;

	char a[] = "check the rhyme";
	char b[] = "check the thyme";
	char c[] = "check the time";

	s1 = a;
	s2 = b;
	s3 = c;

	int n = 13;

	printf("Result: %d\n", strncmp(s1, s2, n));
	printf("My Result: %d\n", ft_strncmp(s1, s2, n));

	printf("Result: %d\n", strncmp(s2, s3, n));
	printf("My Result: %d\n", ft_strncmp(s2, s3, n));
	
	return (0);
}
*/
