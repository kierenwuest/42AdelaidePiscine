//TASK create end to end testable code from team 

#include "rush.h"

int	main(int argc, char **argv)
{
	int		board_output[16];
	int		*input_arr;

	input_arr = clean_input(argc,argv[1]);
	
	init_board(board_output);
	fill_board(input_arr, board_output);
	// board_output = column_top(input_arr);
	// board_output = column_bottom(input_arr);
	//row_left(input_arr);
	//row_right(input_arr);
	print_output(board_output);
	free(input_arr);
	// free(board_output);
	return (0);
}
