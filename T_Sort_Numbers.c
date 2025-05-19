#include <stdio.h>
#include <limits.h>

void reversePrint(int a[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    int copyArray[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        copyArray[i] = a[i];
    }

    reversePrint(a);

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", copyArray[i]);
    }

    return 0;
}