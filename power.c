#include <stdio.h>

int fun(int n,int p)
{
    if (p == 0)

        return 1;

    else

        return fun (n,p-1)*n;
}
int main()
{
    int r;
    r = fun(7,3);
    printf("%d\n", r);
    return 0;
}