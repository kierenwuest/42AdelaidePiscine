#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	swp;

	c = 0;
	while (c < size)
	{
		if (tab[c] > tab[c + 1])
		{
			swp = tab[c];
			tab[c] = tab[c + 1];
			tab[c + 1] = swp;
			c = 0;
		}
		else
			c++;
	}	
}
/*
int	main(void)
{
	int		arr[] = {9,8,7,6,5,4,3,2,1};
	int		size = sizeof(arr) / sizeof(int);

	printf("Input : ");
	for (int i = 0; i < size; i++)
		printf("%d", arr[i]);
	printf("\n");

	ft_sort_int_tab(arr, size);

	printf("Output: ");
	for (int i = 0; i < size; i++)
		printf("%d", arr[i]);
	printf("\n");

	return (0);
}
*/
