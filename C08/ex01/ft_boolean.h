/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwuest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:09:25 by kwuest            #+#    #+#             */
/*   Updated: 2022/12/15 17:23:19 by kwuest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

//supply the lib not included in main
# include <unistd.h>

typedef int	t_bool;
// Creates the t_bool type declared in the main

//define undefined variables from main
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

//calc even(nbr)
# define EVEN(x) (x % 2) == 0

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif
