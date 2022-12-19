// utilise the size variable to limit the copy loop
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	char	*dest; 

	// check for correct arguments
	if (argc != 3)
	{
		printf("Usage: %s <string> <bytes>\n", argv[0]);
	    return (1);
	}

	//will need to allocate memory for the destination array
	//use the specified input
	dest = malloc(atoi(argv[2]));

	//give the function what it needs from the inputs
	ft_strlcpy(dest, argv[1], atoi(argv[2]));

    //show input and output values
    printf("Source Input      : \"%s\"\n", argv[1]);
	printf("Limited by        : %d bytes\n", atoi(argv[2]));
    printf("Destination Output: \"%s\" \n", dest);
	
	//required for malloc
	free(dest);

	return(0);
}
*/
