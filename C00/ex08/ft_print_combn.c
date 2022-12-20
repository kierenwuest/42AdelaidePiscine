#include <unistd.h>

// Receive integer value and write it with a sick div/mod chop loop, add leading zeros
void    printNums(int value, int i, int incSize)
{
    char    v;

    if (i < incSize)
        write(1, "0", 1);
    while (value != 0)
    {
        v = (value % 10) + 48;
        write(1, &v, 1);
        value /= 10;
    }
}

// Use int n return n to the power of i and recurse or go via div/mod2 of x*x.
int power(int n, int i) 
{
	int	x;

    if (i == 0)
        return (1);
    else if (i == 1)
        return (n);
    else if (i % 2 == 0) 
	{
        x = power(n, i / 2);
        return (x * x);    
	} 
	else 
        return (n * power(n, i - 1));
}


// Receive integer i and print it If it is ascending add leading zeros
// Return flag(1) if the number was printed or -1 otherwise
int print(int flag, int i, int incSize)
{
    int invNum;
    int preVal;
    int value;
    int n;

    invNum = 0;
    preVal = 10;
    n = i;
    while (n != 0)
    {
        invNum *= 10;
        value = (n % 10);
        invNum += value;
        n /= 10;
        if (value >= preVal)
            return (-1);
        preVal = value;
    }
    printNums(invNum, i, incSize);
    return (flag);
}

//Take int n and print combinations using powers and division of n from 0 to 9 in ascending order
//Set i to the max counter value and something for the max value of combinations then loop 
//check last digit and +1 to end the loop or put in commas.  
void nFunction(int n)
{
    int i;
    int incSize;
    int maxSize;
    int divResult;

    i = 12345678 / power(10, 9 - n);
    incSize = power(10, n - 1);
    maxSize = incSize * 9;
    while (i <= maxSize)
    {
        if (print(1, i, incSize) == 1)
        {
            divResult = i / incSize;
            if (divResult == (10 - n))
                i = maxSize + 1;
            else
                write(1, ", ", 2);
        }
        i++;
    }
}

// Create the nfunction to the requirement through 0 < n < 10
void ft_print_combn(int n)
{
    if ((n > 0) && (n < 10))
        nFunction(n);
    write(1, "\n\n", 2);
}

//Push numbers through the function.
int main(void)
{
    int i = 0;

    while (i < 10)
        ft_print_combn(i++);
    return (0);
}  
