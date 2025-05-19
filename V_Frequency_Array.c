#include <stdio.h>
int main()
{
    int n;
    int m;
    scanf("%d", &n);
    scanf("%d", &m);

    int cnt = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        cnt++;
    }

    int freq[m];
    for (int i = 0; i < m; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        freq[a[i] - 1]++;
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", freq[i]);
    }

    return 0;
}