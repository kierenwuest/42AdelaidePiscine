/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <kwuest@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:11:53 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/02 22:05:15 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nblong;
	char	nbchar[10];
	short	i;

	nblong = nb;
	i = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nblong < 0)
	{
		nblong *= -1;
		write(1, "-", 1);
	}
	while (nblong % 10)
	{
		nbchar[i++] = (nblong % 10) + 48;
		nblong /= 10;
	}
	while (i > 0)
	{
		write(1, &nbchar[--i], 1);
	}
}
/*
int	main(void)
{
	int	test;

	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
}
*/