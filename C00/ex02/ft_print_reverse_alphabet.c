/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <kwuest@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:46:24 by kwuest            #+#    #+#             */
/*   Updated: 2022/11/28 17:10:32 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;

	i = 122;
	while (i > 96)
	{
		write(1, &i, 1);
		i--;
	}
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
*/