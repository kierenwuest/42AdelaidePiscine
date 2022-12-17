/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:10:50 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/15 19:22:41 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//reference the h file to be incorporated 
#include "ft_stock_str.h"

// Return the length of a string
// -
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

// Return a duplicate of the string passed as an argument
// Get the length of the string to be duplicated
// Allocate memory for the duplicate string
// Copy each char from the source string to the destination string
// Add a null character to the end of the destination string
// -
char	*ft_strdup(char *src)
{
	char	*dst;
	int		src_len;
	int		pos;

	src_len = ft_strlen(src);
	dst = malloc(sizeof(*dst) * (src_len + 1));
	if (dst == 0)
		return (0);
	pos = 0;
	while (src[pos] != 0)
	{
		dst[pos] = src[pos];
		pos++;
	}
	dst[pos] = 0;
	return (dst);
}

// Return an array of t_stock_str structs
// Allocate memory for the array of t_stock_str structs
// Iterate over the array of strings passed to the function
// - Initialize the size field of the current t_stock_str struct
// - Initialize the str field of the current t_stock_str struct
// - Initialize the copy field of the current t_stock_str struct
// Set the str field of the last t_stock_str struct in the array to 0
// -
struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			pos;

	pos = 0;
	res = malloc(sizeof(*res) * (ac + 1));
	if (res == 0)
		return (0);
	while (pos < ac)
	{
		res[pos].size = ft_strlen(av[pos]);
		res[pos].str = av[pos];
		res[pos].copy = ft_strdup(res[pos].str);
		pos++;
	}
	res[pos].str = 0;
	return (res);
}
/*

//Iterate over the stock_str array returned by the ft_strs_to_tab() function 
//Print out the size, str, and copy fields for each element in the array.

#include <stdio.h>

int main(int argc, char **argv)
{
    t_stock_str *stock_str;
    int         i;

    stock_str = ft_strs_to_tab(argc, argv);

    for (i = 0; i < argc; i++)
    {
        printf("size: %d\n", stock_str[i].size);
        printf("str: %s\n", stock_str[i].str);
        printf("copy: %s\n", stock_str[i].copy);
    }

    return 0;
}

//Make three functions: ft_strlen(), ft_strdup(), ft_strs_to_tab().
//ft_strs_to_tab() function should take the number of strings and an array
//of strings, and return an array of t_stock_str structs,
//each of which contains the size, str, and copy fields

*/
