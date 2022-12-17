#include <unistd.h>
#include <stdio.h>
#include <math.h>
/*
char[82] solver(char board[82])
{
	char	pBoard = "4321122243211222";
	char	solve[82] = "12342###3###4###";
	int		i;
	int		boardPos;
	int		row;
	int		col;

	while ( pboard[i] == 4 )
	{
			

	}

}
*/

int	main(int argc, char **argv)
{
	// argv is the input string from terminal execution eg. ./a.out 
	// "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" from subject example
	char cleanInput[82]; // 9x9 = 81 (+1) for end
	char output[122]; // 9x9 = 81 (+4[corners_]) (+4x9[=36 #'s]) (+1) for end
	char solveGrid[82] = "1234234134124123";
	int i = 0;
	int n = 0;
	int arrLen = 0;
	int cleanLen = 0;
	int gridSize = 0;

	printf("\nInput array: %s \n", argv[1]);

	//clean and create new working array
	while ( argv[1][i] != '\0')
	{
		if ( argv[1][i] != ' ')// || argv[1][i] != ',') // clean other bad chars here with ORs
		{
		// if  divide array length by 4       
		cleanInput[n] = argv[1][i];
		n++;
		}
	i++;
	}
	arrLen = i;
	printf("Input string length: %d \n", arrLen);
	cleanLen = n;
	cleanInput[n] = '\0';

	gridSize = sqrt(cleanLen); 
	// insert non sqrt error exit

	printf("Clean input length: %d \n", cleanLen);
	printf("Clean input array: %s \n\n", cleanInput);

	// Print the unsolved board
	printf("Grid Size: %dx%d \n\n", gridSize, gridSize);

	printf("\033[1;32m");
	printf("BOARD DISPLAY: Input array \n\n");
	//row 1
	printf("_ %c %c %c %c _\n", cleanInput[0],cleanInput[1],cleanInput[2],cleanInput[3]);
	//row 2
	printf("%c ", cleanInput[8]);
	printf("\033[0;31m");
	printf("# # # # ");
	printf("\033[1;32m");
	printf("%c\n", cleanInput[12]);
	//row 3
	printf("%c ", cleanInput[9]);
	printf("\033[0;31m");
	printf("# # # # ");
	printf("\033[1;32m");
	printf("%c\n", cleanInput[13]);
	//row 4
	printf("%c ", cleanInput[10]);
	printf("\033[0;31m");
	printf("# # # # ");
	printf("\033[1;32m");
	printf("%c\n", cleanInput[14]);
	//row 5
	printf("%c ", cleanInput[11]);
	printf("\033[0;31m");
	printf("# # # # ");
	printf("\033[1;32m");
	printf("%c\n", cleanInput[15]);
	//row 6
	printf("_ %c %c %c %c _\n\n", cleanInput[4],cleanInput[5],cleanInput[6],cleanInput[7]);

	// Print placeholder solution array
	i = 0;
	printf("\033[1;31m");
	printf("SOLUTION DISPLAY: Output array \n\n");
	while (solveGrid[i] != '\0')
		{
			if (i == 4 || i == 8 || i == 12)
				printf("\n");
			printf(" %c", solveGrid[i]);
			i++;
			if (i == 16)
				printf("\n\n");
		}

	return 0;
}

/* NOTES

Grids:

	1x1 = 2, 2x2 = 4, 3x3 = 9, 4x4 = 16, 5x5 = 25, 6x6 = 36, 7x7 = 49, 8x8 = 64, 9x9 = 81
	create grid eg:
	12121212 =
	_12_
	1##1
	2##2
	_12_

	For clean input array: 1234123412341234
	
	4x4 input grid = (+2) 6x6

	_1234_ = _input[0,1,2,3]_\n
	1####1 = input[8]####input[12]\n
	2####2 = input[9]####input[13]\n
	3####3 = input[10]####input[14]\n
	4####4 = input[11]####input[15]\n
	_1234_ = _input[4,5,6,7]_\n

	For soltuion output array index: [0-15]

	output[ 0  1  2  3
	        4  5  6  7
            8  9 10 11
		   12 13 14 15]

Indexing:

	With an array of 0-15
	index = 0-15 position value
	in a 4x4 4row 4column
	WHERE gridSize = 4;
	row = ?;
	column = ?;

	row = index / 4;
	column =  index % 4;

	eg	index 0 = row 0 col 0
		index 5 = row 1 col 1
		index 10 = row 2 col 2
		index 15 = row 3 col 3
		index 6 = row 1 col 3
		index 12 = row 3 col 0

*/
