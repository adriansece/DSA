#include <iostream> 

using namespace std;
float a[100];
int i, j, n;

int main()
{
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++)
    {
        int vmin_poz=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[vmin_poz])
                vmin_poz=j;
        float aux=a[i];
              a[i]=a[vmin_poz];
              a[vmin_poz]=aux;
    }
    return 0;
}