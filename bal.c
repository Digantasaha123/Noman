#include <stdio.h>
int main()
{
    int n, target, t, x = 0, y = 1, z = 0;
    scanf("%d", &n);
    scanf("%d", &target);
    while (n != 0)
    {
        t = n % 10;
        n = n / 10;
        x += t;
        y *= t;
        z -= t;
    }
    if (x == target || y == target || z == target)
        printf("Possible");
    else
        printf("Imposible");

    return 0;
}