#ifndef RUSH_H
    # define RUSH_H

    # include <unistd.h>
    # include <stdlib.h>
    # include <stdio.h>

    int     *clean_input(int argc, char *str);
    void    ft_putstr(char *str);
    void    print_error();
    int     *potential_ans(int condition);
    int     *input_str_to_int_arr(char *str);
    void    find_last_nbr(int *arr);
	void	print_output(int *arr);
	int		*column_top(int	*input);
	int		*column_bottom(int	*input);
    void    init_board(int *arr);
    void    fill_4only(int pos, int *output_arr);
    void    fill_1to4(int pos, int *output_arr);
    void    fill_board(int *input_arr, int *output_arr);
#endif
