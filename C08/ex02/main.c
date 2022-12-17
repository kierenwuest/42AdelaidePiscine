#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	// Make sure there are at least two arguments
    if (argc < 2)
    {
        printf("Usage: %s <integer>\n", argv[0]);
        return (1);
    }

	// Convert the char integer to integer value via stdlib.h atoi() 
    int x = atoi(argv[1]);

    printf("The absolute value of %d is %d\n", x, ABS(x));

    return (0);
}
