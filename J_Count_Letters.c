#include <stdio.h>
#include <string.h>
int main()
{
    static char s[10000001];
    scanf("%s", s);

    int a[27] = {0};

    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        a[s[i] - 97]++;
    }

    for (int i = 0; i < 27; i++)
    {
        if (a[i] != 0)
        {
            printf("%c : %d\n", i + 97, a[i]);
        }
    }

    return 0;
}