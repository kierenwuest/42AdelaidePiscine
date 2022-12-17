/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:11:14 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/17 14:43:35 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		else
		{
			write(1, "-", 1);
			nbr *= -1;
		}
	}
	if (nbr < 10)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

//Write the values of the str, size, and copy fields for each element 
//in the input array of t_stock_str structs
//While: Iterate over the array of t_stock_str structs
//Write .str .size .copy and iterate pos++
void	ft_show_tab(struct s_stock_str *par)
{
	int	pos;

	pos = 0;
	while (par[pos].str != 0)
	{
		ft_putstr(par[pos].str);
		ft_putnbr(par[pos].size);
		write(1, "\n", 1);
		ft_putstr(par[pos].copy);
		pos++;
	}
}
/*
int main(void)
{
    t_stock_str stock_str[] =
    {
        { .str = "hello", .size = 5, .copy = "hello" },
        { .str = "world", .size = 5, .copy = "world" },
        { .str = "foo", .size = 3, .copy = "foo" }
    };

    // Call the ft_show_tab() function 
	// Pass the array of t_stock_str structs as an argument
    ft_show_tab(stock_str);

    return (0);

}
*/
