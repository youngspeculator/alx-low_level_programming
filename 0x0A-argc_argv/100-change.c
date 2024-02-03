#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int cents, Quarters = 0, Dimes = 0, Nickels = 0, Pennies = 0;
/* Check if the number of arguments is not exactly 2 including program name*/
if (argc != 2)
{
printf("Error\n");
return (1);
}
/* Convert the argument (amount in cents) to an integer.*/
cents = atoi(argv[1]);
/* Check if the amount is negative and print 0 if it is.*/
if (cents < 0)
{
printf("0\n");
return (0);
}
/* Initialize variables to count the number of each type of coin.*/
Quarters = 0, Dimes = 0, Nickels = 0, Pennies = 0;
/* Calculate the number of each coin denomination.*/
while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
Quarters++;
}
else if (cents >= 10)
{
cents -= 10;
Dimes++;
}
else if (cents >= 5)
	{
cents -= 5;
Nickels++;
	}
else
	{	
cents -= 1;
Pennies++;
	}
}
return (0);
}
