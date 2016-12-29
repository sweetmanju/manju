#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n1, n2, k, j, f, tem, count = 0;

    printf("Enter the value of n1 and n2 \n");
    scanf("%d %d", &n1, &n2);
    if (n2 < 2)
    {
        printf("There are no primes upto %d\n", n2);
        exit(0);
    }
    printf("Prime numbers are \n");
    tem= n1;
    if ( n1 % 2 == 0)
    {
        n1++;
    }
    for (k = n1; k <= n2; k = k + 2)
    {
        f = 0;
        for (j = 2; j <= k / 2; j++)
        {
            if ((k % j) == 0)
            {
                f= 1;
                break;
            }
        }
        if (f==0)
        {
            printf("%d\n", k);
            count++;
        }
    }
    printf("Number of primes between %d & %d = %d\n", tem, n2, count);
}
