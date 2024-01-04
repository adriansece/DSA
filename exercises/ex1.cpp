#include <iostream>
using namespace std;
int main()
{

    int n, aux;
    double arry[5];
    for(int i=0;i<=n;i++){
        cin>>arry[i];
    }
    for(int i=0;i<=n;i++){
        if(arry[i]<arry[i+1]){
            aux=arry[i];
            arry[i]=arry[i+1];
            arry[i+1]=aux;
        }

    }
    for(int i=0;i<=n;i++)
        cout<<arry[i]<<" ";
}


