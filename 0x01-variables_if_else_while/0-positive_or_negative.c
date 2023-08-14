#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - main function
 *Description: 'to print stored in the variable n is positive or negative'
 *Return: alawys 0 (Success)
*/
<<<<<<< HEAD
	int main(void)
{	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if	(n > 0)
		printf("%d is positive", n);
	else if	(n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n")
	return (0);
=======
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
    else
        printf("%d is negative\n", n);
    return (0);

>>>>>>> dc64ea8131ec8e7ca8a2003d5e95b48b4e0fb567
}
