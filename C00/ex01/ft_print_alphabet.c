/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:50:37 by kwuest            #+#    #+#             */
/*   Updated: 2022/11/28 17:13:12 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;

	i = 97;
	while (i < 123)
	{
		write(1, &i, 1);
		i++;
	}
}
/*
int main(void)
{
	ft_print_alphabet();
	return(0);
}
*/