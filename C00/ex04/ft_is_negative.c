/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:10:37 by kwuest            #+#    #+#             */
/*   Updated: 2022/11/28 17:38:54 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write (1, "P", 1);
	}
	else
	{
		write (1, "N", 1);
	}
}
/*
int main(void)
{
	ft_is_negative(2147483647);
	ft_is_negative(42);
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-1);
	ft_is_negative(-42);
	ft_is_negative(-2147483648);

	return(0);
}
*/