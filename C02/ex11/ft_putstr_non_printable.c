#include <unistd.h>

// Theres probably a better way to do this using the base algorithm in C04/ex04
void printLowHex(int c)
{
	if (c <= 9)
	{
		c += 48;
		write(1, "\\0", 2);
		write(1, &c, 1);
	}
	else if (c >= 10 && c <= 15)
	{
		c += 87;
		write(1, "\\0", 2);
		write(1, &c, 1);
	}
	else if (c >= 16 && c <= 25) 
	{
		c += 32;
		write(1, "\\1", 2);
		write(1, &c, 1);
	}
	else if (c >= 26 && c <= 31)
	{
		c += 71;
		write(1, "\\1", 2);
		write(1, &c, 1);
	}
	else if (c == 127)
		write(1, "\\7f", 3);
	else
		write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
	int	i = 0;
	while (str[i])
		printLowHex(str[i++]);
	write(1, "\n", 1);
}
/*
int main()
{
	char *str = "Coucou\ntu vas bien ?";
	int	i = 0;
	ft_putstr_non_printable(str);
	while (i < 128)
		printLowHex(i++);
	write(1, "\n", 1);
	return (0);
}
*/
