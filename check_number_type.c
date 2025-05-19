#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if (0 == x)
        printf("Zero");
    else if (0 < x)
        printf("Positive");
    else if (0 > x)
        printf("Negative");

    return 0;
}