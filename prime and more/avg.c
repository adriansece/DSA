#include <stdio.h>
int main()
{
    int a, b;
    printf("A is: ");
    scanf("%d", &a);
    printf("b is: ");
    scanf("%d", &b);

    printf("the average of a and b is: ");
    float average = (float)(a+b)/2;
    printf("%.2f", average);
    return 0;
}