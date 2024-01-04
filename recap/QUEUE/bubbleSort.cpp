#include <iostream>
using namespace std;

float a[100];
int i, n, sw;
int main()
{
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    sw=1;
    while(sw)
    {
        sw=0;
        for(i=0;i<n-1;i++)
            if(a[i]>a[i+1])
            {
                a[i+1]=a[i];
                a[i]=a[i+1];
                float   aux=a[i];
                        a[i]=a[i+1];
                        a[i+1]=aux;
                sw=1;
            }
    }
    return 0;
}