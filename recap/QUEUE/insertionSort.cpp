#include <iostream>

using namespace std;
double a[100];
int i, j, k, n;
int main()
{
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=1;i<n;i++)
        for(j=0;j<i;j++)
            if(a[i]<a[j])
            {
                double  aux=a[i];
                for(k=j+1;k<=i;k++) a[k]=a[k-1];
                for(k=i;k>=j+1;k--) a[k]=a[k-1];
                a[j]=aux;
                break;
            }
    return 0;
}