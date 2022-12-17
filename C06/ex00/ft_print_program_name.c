/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:58:55 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/13 18:15:53 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	while (*argv[0] && argc > 0)
	{
		write(1, &*argv[0], 1);
		argv[0]++;
	}
	write(1, "\n", 1);
}
