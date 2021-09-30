#include <stdio.h>

int fun(int n)
{
    if (n == 0)

        return 1;

    else

        return fun(n - 1) * n;
}
int c(int n,int r)
{
int num,den;
num=fun(n);
den=fun(r)*fun(n-r);
return num/den;
}int main()
{
    int r;
    r = c(5,1);
    printf("%d\n", r);
    return 0;
}