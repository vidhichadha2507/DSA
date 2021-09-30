#include <stdio.h>
void fun(int n)
{
    if (n > 0)
    {
        //if we write the fun(n-1);
        //output will be 1 2 3
        printf("%d ", n);
        fun(n - 1); //here output is 321
        fun(n - 1); // tree recursion

    }
}
int main()
{
    int x = 3;

    fun(x);
    return 0;
}