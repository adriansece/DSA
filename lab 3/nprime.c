#include <stdio.h>
int prim(int x)
{
    int ok=1;
    if(x==0)
        return 0;
    if(x==1)
        return 0;
    for(int i=2;i<x/2;i++)
    {
        if(x%i==0)
        ok=0;
        break;
    }
    if(ok==1)
        return x;

}

void factorial(int n)
{
    unsigned long long fact = 1;
    for(int i = 1 ; i <= n; ++i)
        fact = fact * i;
    printf("Factorial of n is: ", n, fact);
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0 ; i<=n ; i++)
        printf("Numerele prime sunt: ",prim(i), n);
    printf("Test for factorial: ");
    printf("factorial(9)");
}