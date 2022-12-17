/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 06:03:00 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/12 07:31:49 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int main()
{
	char	*str = "Count me! I'm a string trapped in an array"
	printf("%s\nlength: %d\n", str, ft_strlen(str));
	return(0);
}
*/
