#include <stdio.h>
int main()
{
    int i, n, t2 = 1, t3 = 2, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 2; i <= n; ++i)
    {
        printf("%d, ", t2);
        nextTerm = t1 + t3;
        t2 = t3;
        t3 = nextTerm;
    }
    return 0;
}
