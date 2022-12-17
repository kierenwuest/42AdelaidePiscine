# include "rush.h"

int *column_bottom(int  *input)
{
    int array[4][4];
    int row = 0;
    int col = 0;
    int *outputarray;
    int i = 0;

    outputarray = malloc(sizeof(int) * 17);

    while (col <= 7)
    {
        if (input[col] == 1)
        {
            array[3][col-4] = 4;
        }
        if (input[col] == 4)
        {
            row = 4;
            while (row > 0)
            {
                array[4 - row][col - 4] = row;
                row--;
            }
        }
        col++;
    }
    while (i <16)
    {
        outputarray[i] = array[i/4][i%4];
        i++;
    }
    return (outputarray);
}

int *column_top(int  *input)
{
    int array[4][4];
    int row = 0;
    int col = 0;
    int *outputarray;
    int i = 0;

    outputarray = malloc(sizeof(int) * 17);
    for (int z = 0; z < 4; z++)
    {
        for (int y = 0; y < 4; y++)
        {
        array[z][y] = 6;
        }
    }
    while (col <= 3)
    {
        if (input[col] == 1)
        {
            array[0][col] = 4;
        }
        if (input[col] == 4)
        {
            row = 0;
            while (row <= 3)
            {
                array[row][col] = 1 + row;
                row++;
            }
        }
        col++;
    }
    while (i <16)
    {
        outputarray[i] = array[i/4][i%4];
        i++;
    }
    return (outputarray);
}

int *clean_input(int argc, char *str)
{
	int		*clean_input;
	int		i;
	int		j;

    if (argc != 2)
    {
        print_error();
        exit(-1);
    }
    
	clean_input = malloc(sizeof(int) * sizeof(str));
	i = 0;
	j = 0;
    while ( str[i] != '\0')
    {
        if (str[i] >= '1' && str[i] <= '4') {
            clean_input[j] = str[i] - '0';
            j++;
        }
        else if (str[i] != ' ')
        {
            print_error();
            exit(-1);
        }
        i++;
    }
	if (j != 16) 
        {
            print_error();
            exit(-1);
        }
    return (clean_input);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i]){
        write(1, &str[i], 1);
        i++;
    }
}

// Error Check Function [hli]
void    print_error()
{
    ft_putstr("Error\n");
    ft_putstr("Warning: Input invalid. Please try again.\n");
}

void	print_output(int *arr)
{
    int	    i;
    char    temp;
	i = 0;
	while (i < 16)
    {
        if (i == 4 || i == 8 || i == 12)
            write(1, "\n", 1);
        temp = arr[i] + '0';
        if (temp =='6')
            temp = '#';
        write(1, &temp, 1);
        write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
}

int *potential_ans(int condition)
{
    int *ptr;
    int i;

    if (condition == 1) {
        ptr = malloc(sizeof(int) * 1);
        ptr[0] = 4;
    }

    if (condition == 2) {
        ptr = malloc(sizeof(int) * 3);
        ptr[0] = 1;
        ptr[1] = 2;
        ptr[2] = 3;
    }

    if (condition == 3) {
        ptr = malloc(sizeof(int) * 2);
        ptr[0] = 1;
        ptr[1] = 2;
    }
    
    return (ptr);
}

int *input_str_to_int_arr(char *str)
{
    int    i;
    int    j;
    int *output;

    i = 0;
    j = 0;
    output = malloc(sizeof(int) * sizeof(str));
    while(str[i]){
        if (str[i] >= '1' && str[i] <= '4') {
            output[j] = str[i] - '0';
            j++;
        }
        else if (str[i] != ' ')
        {
            output[0] = -1;
            return output;
        }
        i++;
    }
    if (j != 16) {
        output[0] = -1;
    }
    return output;
}

void find_last_nbr(int *arr)
{
    int i;
    int j;
    int k;

    i = 0;
    k = 10;
    while (i < 4)
    {
        if (arr[i] <= 4 && arr[i] >= 1) {
            k -= arr[i]; 
        }
        else
        {
            j = i;
        }
        i++;
    }
    arr[j] = k;
}

void    init_board(int *arr)
{
    int i;
    
    i = 0;
    while (i < 16)
    {
        arr[i] = 6;
        i++;
    }
}

void    fill_board(int *input_arr, int *output_arr)
{
    int i;
    int pos;

    i = 0;
    while (i < 16)
    {   
        if (input_arr[i] == 4)
            fill_1to4(i, output_arr);
        else if (input_arr[i] == 1)
            fill_4only(i, output_arr);
        i++;
    }
}

void    fill_4only(int pos, int *output_arr)
{
    if (pos >= 0 && pos <= 3)
        output_arr[pos] = 4;
    else if (pos >= 4 && pos <= 7)
        output_arr[pos + 8] = 4;
    else if (pos >= 8 && pos <= 11)
        output_arr[(pos-8)*4] = 4;
    else
        output_arr[4*pos-45] = 4;
}

void    fill_1to4(int pos, int *output_arr)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (pos >= 0 && pos <= 3)
            output_arr[pos + i*4] = i + 1;
        else if (pos >= 4 && pos <= 7)
            output_arr[pos - 4 + i*4] = 4 - i;
        else if (pos >= 8 && pos <= 11)
            output_arr[(pos-8)*4 + i] = i + 1;
        else
            output_arr[4*pos-45 - i] = 4 - i;
        i++;
    }
}

