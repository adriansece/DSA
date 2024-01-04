#include <iostream>
using namespace std;

void sort()
{
    
}
int main()
{
    int a[5];
    int n,i,j;
    int aux;

    cin>>n;
    
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
    }
        

    for(i=1;i<n;i++)
        cout<<a[i]<<" ";
}