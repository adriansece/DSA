#include <stdio.h>
int relativelyPrime(int a, int b)
{
    int comDiv;
    for(int i = 1 ; i < a ; i++)
        if(a%i == 0 && b%i == 0)
            comDiv = i;
    if(comDiv == 1) printf("numbers are relatively prime");
    else printf("numbers are not relatively prime");
    return 1;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    relativelyPrime(a, b);
    return 0;
}
