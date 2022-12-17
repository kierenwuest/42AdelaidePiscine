/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <kwuest@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:13:58 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/02 22:15:28 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printdigits(short n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		write(1, "0", 1);
		write(1, &c, 1);
		return ;
	}
	c = (n / 10) + 48;
	write(1, &c, 1);
	c = n % 10 + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	short	doubledigits[2];

	doubledigits[0] = 0;
	while (doubledigits[0] < 99)
	{
		doubledigits[1] = doubledigits[0] + 1;
		while (doubledigits[1] < 100)
		{
			printdigits(doubledigits[0]);
			write(1, " ", 1);
			printdigits(doubledigits[1]);
			if (doubledigits[0] == 98 && doubledigits[1] == 99)
				write(1, '\0', 1);
			else
				write(1, ", ", 2);
		doubledigits[1]++;
		}
	doubledigits[0]++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
